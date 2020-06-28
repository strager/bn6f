import PIL.Image
import os
import pathlib
import struct
import subprocess
import tempfile
import typing
from map2png import TILE_WIDTH, TILE_HEIGHT, address_to_rom_offset, gbagfx_exe, decompress

def chunk(data: bytes, bytes_per_chunk: int) -> typing.List[bytes]:
    chunks = []
    for chunk_start_index in range(0, len(data), bytes_per_chunk):
        chunks.append(data[chunk_start_index:chunk_start_index+bytes_per_chunk])
    return chunks

def main():
    with tempfile.TemporaryDirectory() as temporary_directory:
        temp_dir = pathlib.Path(temporary_directory)
        with open("bn6f.gba", "rb") as rom_file:
            def unpack_at_offset(rom_offset: int, format: str):
                rom_file.seek(rom_offset)
                return unpack(format)

            def unpack(format: str):
                size = struct.calcsize(format)
                data = rom_file.read(size)
                return struct.unpack(format, data)

            owsprite_address = 0x84c3c90
            (compressed_size,) = unpack_at_offset(address_to_rom_offset(owsprite_address), "<I")
            compressed_size >>= 8
            rom_file.seek(address_to_rom_offset(owsprite_address))
            compressed_data = rom_file.read(compressed_size)
            data = decompress(compressed_data)

            (_compressed_size, _unknown_4, _unknown_8, _unknown_c, palette_offset, _unknown_14, _unknown_18, _unknown_1c, tile_set_size) = struct.unpack_from("<IIIIIIIII", data, 0)
            tile_set_offset = 0x24

            PALETTE_SIZE = 16*2
            palette_data = data[palette_offset+0xc:palette_offset+0xc+PALETTE_SIZE]

            tile_set_data = data[tile_set_offset:tile_set_offset+tile_set_size]

            tile_set_png_path = "tile-set.png"
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
            print(f"wrote {tile_set_png_path}")


if __name__ == "__main__":
    main()
