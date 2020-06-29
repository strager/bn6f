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
        data_with_header = decompress(compressed_data)

        (_unknown_4, _unknown_5, _unknown_6, sprite_count) = struct.unpack_from("<BBBB", data_with_header, 4)
        if sprite_count == 0:
            raise Exception(f"no sprites found")
        sprite_header_offsets = [
                struct.unpack_from("<I", data_with_header, 8 + sprite_index*4)[0]
                for sprite_index in range(sprite_count)
        ]
        data = data_with_header[8:]
        for sprite_index in range(sprite_count):
            sprite_header_offset = sprite_header_offsets[sprite_index]
            (tile_set_offset, palettes_offset, _unknown_14, object_list_offset, _unknown_1c) = struct.unpack_from("<IIIII", data, sprite_header_offset)

            (palettes_size,) = struct.unpack_from("<I", data, palettes_offset)
            PALETTE_SIZE = 16*2
            palette_datas = chunk(
                    data[palettes_offset+4:palettes_offset+4+palettes_size],
                    PALETTE_SIZE)

            (tile_set_size,) = struct.unpack_from("<I", data, tile_set_offset)
            print(f"tile_set {tile_set_offset:#x}..{tile_set_offset+tile_set_size:#x}")
            tile_set_data = data[tile_set_offset+4:tile_set_offset+4+tile_set_size]

            tile_sets = [
                make_sprite_tile_set_image(tile_set_data=tile_set_data, palette_data=palette_data)
                for palette_data in palette_datas
            ]

            object_list = []
            while True:
                (tile_index, x, y, flags) = struct.unpack_from("<BbbH", data, object_list_offset + 4)
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
                object_list_offset += 5

            sprite = PIL.Image.new("RGBA", (256, 256))
            for object_list_entry in object_list:
                (object_width, object_height) = object_list_entry.size
                tile_index = object_list_entry.tile_index
                for yi in range(0, object_height, TILE_HEIGHT):
                    for xi in range(0, object_width, TILE_WIDTH):
                        sprite.alpha_composite(tile_sets[object_list_entry.palette_index], (object_list_entry.x + xi + 128, object_list_entry.y + yi + 128), (0, tile_index * TILE_HEIGHT, TILE_WIDTH, tile_index * TILE_HEIGHT + TILE_HEIGHT))
                        tile_index += 1
            # @@@ todo: compose sprites?
            return sprite

def make_sprite_tile_set_image(tile_set_data: bytes, palette_data: bytes):
    with tempfile.TemporaryDirectory() as temporary_directory:
        temp_dir = pathlib.Path(temporary_directory)
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
            "-width", "1",
        ])
        tile_set = PIL.Image.open(tile_set_png_path)
        transparent_tile_set_png_path = temp_dir / "transparent-tile-set.png"
        tile_set.save(transparent_tile_set_png_path, transparency=0)
        return PIL.Image.open(transparent_tile_set_png_path).convert("RGBA")


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
            #(0, 3): (8, 16), # @@@ probably wrong
            (1, 0): (16, 16),
            (1, 1): (32, 8),
            (1, 2): (8, 32),
            #(1, 3): (8, 32), # @@@ probably wrong
            (2, 0): (32, 32),
            (2, 1): (32, 16),
            (2, 2): (16, 32),
            #(2, 3): (16, 32), # @@@ probably wrong
            (3, 0): (64, 64),
            (3, 1): (64, 32),
            (3, 2): (32, 64),
            #(3, 3): (32, 64), # @@@ probably wrong
        }
        return size_and_shape_to_width_and_height[(self.size_flag, self.shape_flag)]
