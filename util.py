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

def get_overworld_sprite_image(rom: ROM, owsprite_index: int):
    owsprite_table_address = 0x80a3a44
    obj_sprite_pointers_address = 0x08032314

    (sprite_index,) = rom.unpack_at_offset(address_to_rom_offset(owsprite_table_address + owsprite_index*0x10 + 0x1), "<B")
    print(f"sprite_index={sprite_index:#x}")
    (owsprite_address,) = rom.unpack_at_offset(address_to_rom_offset(obj_sprite_pointers_address + sprite_index*0x4), "<I")
    # Does top bit set mean we have to use the overworld
    # sprite format instead of the animation sprite
    # format?
    owsprite_address &= ~0x80000000
    print(f"owsprite_address={owsprite_address:#x}")
    #owsprite_address = 0x84c3c90
    #owsprite_address = 0x84c3c90
    return get_overworld_sprite_image_raw(rom=rom, owsprite_address=owsprite_address)

def get_overworld_sprite_image_raw(rom: ROM, owsprite_address: int):
    with tempfile.TemporaryDirectory() as temporary_directory:
        temp_dir = pathlib.Path(temporary_directory)
        (compressed_size,) = rom.unpack_at_offset(address_to_rom_offset(owsprite_address), "<I")
        compressed_size >>= 8
        rom.file.seek(address_to_rom_offset(owsprite_address))
        compressed_data = rom.file.read(compressed_size)
        data = decompress(compressed_data)

        (_compressed_size, _unknown_4, _unknown_8, tile_set_offset, palette_offset, _unknown_14, _unknown_18, _unknown_1c) = struct.unpack_from("<IIIIIIII", data, 0)

        (palette_size,) = struct.unpack_from("<I", data, palette_offset+8)
        palette_size = 16*2 # TODO: support multiple palettes
        palette_data = data[palette_offset+8+4:palette_offset+8+4+palette_size]
        print(f"palette {palette_offset+8:#x}..{palette_offset+8+palette_size:#x}")

        (tile_set_size,) = struct.unpack_from("<I", data, tile_set_offset+8)
        print(f"tile_set {tile_set_offset+8:#x}..{tile_set_offset+8+tile_set_size:#x}")
        tile_set_data = data[tile_set_offset+8+4:tile_set_offset+8+4+tile_set_size]

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
        tile_set = PIL.Image.open(tile_set_png_path)
        transparent_tile_set_png_path = temp_dir / "transparent-tile-set.png"
        tile_set.save(transparent_tile_set_png_path, transparency=0)
        return PIL.Image.open(transparent_tile_set_png_path)
