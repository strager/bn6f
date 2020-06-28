import PIL.Image
import os
import pathlib
import struct
import subprocess
import tempfile
import typing

gbagfx_exe = pathlib.Path(__file__).parent / "tools" / "gbagfx" / "gbagfx"
TILE_WIDTH = 8
TILE_HEIGHT = 8


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


            tile_set_png_path = temp_dir / "tile-set.png"
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
                "-width", "1",
            ])

            temp_tile_set_png_path = temp_dir / "temp-tile-set.png"
            temp_tile_set = PIL.Image.open(tile_set_png_path)
            temp_tile_set.save(temp_tile_set_png_path, transparency=0)
            tile_set = PIL.Image.open(temp_tile_set_png_path).convert("RGBA")

            object_list_rom_offset = animation_table_rom_offset + object_lists_animoffset
            # _objoffset variables hold pointers relative to object_list_rom_offset.
            (object_list_objoffset,) = unpack_at_offset(object_list_rom_offset, "<I")
            rom_file.seek(object_list_rom_offset + object_list_objoffset)

            object_list = []
            while True:
                (tile_index, x, y, flags) = unpack("<BbbH")
                if tile_index == 0xff:
                    break
                object_list.append(ObjectListEntry(
                    tile_index=tile_index,
                    x=x,
                    y=y,
                    size_flag = (flags >> 0) & 3,
                    h_flip = (flags & (1<<6)) != 0,
                    v_flip = (flags & (1<<7)) != 0,
                    shape_flag = (flags >> 8) & 3,
                    palette_index = (flags >> 12),
                ))

            sprite = PIL.Image.new("RGBA", (256, 256))
            for object_list_entry in object_list:
                (object_width, object_height) = object_list_entry.size
                tile_index = object_list_entry.tile_index
                for yi in range(0, object_height, TILE_HEIGHT):
                    for xi in range(0, object_width, TILE_WIDTH):
                        sprite.alpha_composite(tile_set, (object_list_entry.x + xi + 128, object_list_entry.y + yi + 128), (0, tile_index * TILE_HEIGHT, TILE_WIDTH, tile_index * TILE_HEIGHT + TILE_HEIGHT))
                        tile_index += 1
            sprite_png_path = pathlib.Path("sprite.png")
            sprite.save(sprite_png_path)
            print(f"wrote {sprite_png_path}")

class ObjectListEntry(typing.NamedTuple):
    tile_index: int
    x: int
    y: int
    shape_flag: int
    palette_index: int
    size_flag: int
    h_flip: bool
    v_flip: bool

    @property
    def size(self) -> typing.Tuple[int, int]:
        size_and_shape_to_width_and_height = {
            (0, 0): (8, 8),
            (0, 1): (16, 8),
            (0, 2): (8, 16),
            (1, 0): (16, 16),
            (1, 1): (32, 8),
            (1, 2): (8, 32),
            (2, 0): (32, 32),
            (2, 1): (32, 16),
            (2, 2): (16, 32),
            (3, 0): (64, 64),
            (3, 1): (64, 32),
            (3, 2): (32, 64),
        }
        return size_and_shape_to_width_and_height[(self.size_flag, self.shape_flag)]

if __name__ == "__main__":
    main()
