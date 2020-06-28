import PIL.Image
import os
import pathlib
import struct
import subprocess
import tempfile
import typing

gbagfx_exe = pathlib.Path(__file__).parent / "tools" / "gbagfx" / "gbagfx"


def address_to_rom_offset(address: int) -> int:
    return address - 0x08000000

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

            sprite_address = 0x081d8000
            (tiles_in_biggest_tileset, _constant_0, _constant_1, animation_count) = unpack_at_offset(address_to_rom_offset(sprite_address), "<BBBB")

            animation_table_rom_offset = rom_file.tell()
            # _animoffset variables hold pointers relative to animation_table_rom_offset.
            (animation_animoffset,) = unpack_at_offset(animation_table_rom_offset, "<I")
            (tile_set_animoffset, palettes_animoffset, mini_animations_animoffset, object_lists_animoffset, delay, _constant_0, flags, _constant_0) = unpack_at_offset(animation_table_rom_offset + animation_animoffset, "<IIIIBBBB")

            (tile_set_size,) = unpack_at_offset(animation_table_rom_offset + tile_set_animoffset, "<I")
            tile_set_4bpp = rom_file.read(tile_set_size)

            (palette_size,) = unpack_at_offset(animation_table_rom_offset + palettes_animoffset, "<I")
            palette = rom_file.read(palette_size)

            tile_set_png_path = "tile-set.png"
            tile_set_data_path = temp_dir / "tile-set.4bpp"
            tile_set_data_path.write_bytes(tile_set_4bpp)
            palette_path = temp_dir / "tile-set.pal"
            palette_path.write_bytes(palette)
            subprocess.check_call([
                gbagfx_exe,
                str(tile_set_data_path),
                str(tile_set_png_path),
                "-palette",
                str(palette_path),
                "-width", "16",
            ])
            print(f"wrote {tile_set_png_path}")

if __name__ == "__main__":
    main()
