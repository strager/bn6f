import PIL.Image
import os
import pathlib
import struct
import subprocess
import tempfile
import typing


gbagfx_exe = pathlib.Path(__file__).parent / "tools" / "gbagfx" / "gbagfx"

class ROM:
    def __init__(self, file) -> None:
        self.file = file

    def unpack_at_offset(self, rom_offset: int, format: str):
        self.file.seek(rom_offset)
        return self.unpack(format)

    def unpack(self, format: str):
        size = struct.calcsize(format)
        data = self.file.read(size)
        return struct.unpack(format, data)

def address_to_rom_offset(address: int) -> int:
    return address - 0x08000000

def chunk(data: bytes, bytes_per_chunk: int) -> typing.List[bytes]:
    chunks = []
    for chunk_start_index in range(0, len(data), bytes_per_chunk):
        chunks.append(data[chunk_start_index:chunk_start_index+bytes_per_chunk])
    return chunks

TILE_WIDTH = 8
TILE_HEIGHT = 8

def decompress(compressed_data: bytes) -> bytes:
    with tempfile.TemporaryDirectory() as temporary_directory:
        temp_dir = pathlib.Path(temporary_directory)
        compressed_file_path = temp_dir / "map.bin.lz"
        uncompressed_file_path = temp_dir / "map.bin"
        compressed_file_path.write_bytes(compressed_data)
        subprocess.check_call([gbagfx_exe, str(compressed_file_path), str(uncompressed_file_path)])
        return uncompressed_file_path.read_bytes()

def get_overworld_sprite_image(rom: ROM, owsprite_address: int):
    with tempfile.TemporaryDirectory() as temporary_directory:
        temp_dir = pathlib.Path(temporary_directory)
        (compressed_size,) = rom.unpack_at_offset(address_to_rom_offset(owsprite_address), "<I")
        compressed_size >>= 8
        rom.file.seek(address_to_rom_offset(owsprite_address))
        compressed_data = rom.file.read(compressed_size)
        data = decompress(compressed_data)

        (_compressed_size, _unknown_4, _unknown_8, _unknown_c, palette_offset, _unknown_14, _unknown_18, _unknown_1c, tile_set_size) = struct.unpack_from("<IIIIIIIII", data, 0)
        tile_set_offset = 0x24

        PALETTE_SIZE = 16*2
        palette_data = data[palette_offset+0xc:palette_offset+0xc+PALETTE_SIZE]

        tile_set_data = data[tile_set_offset:tile_set_offset+tile_set_size]

        tile_set_png_path = temp_dir / "tile-set.png"
        tile_set_data_path = temp_dir / "tile-set.4bpp"
        tile_set_data_path.write_bytes(tile_set_data)
        palette_path = temp_dir / "tile-set.pal"
        palette_path.write_bytes(palette_data)
        subprocess.check_call([
            gbagfx_exe,
            str(tile_set_data_path),
            str(tile_set_png_path),
            "-palette",
            str(palette_path),
            "-width", "4",
        ])
        return PIL.Image.open(tile_set_png_path)
