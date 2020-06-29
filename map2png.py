from util import TILE_WIDTH, TILE_HEIGHT, address_to_rom_offset, gbagfx_exe, decompress, chunk, get_overworld_sprite_image, ROM
import PIL.Image
import os
import pathlib
import struct
import subprocess
import sys
import tempfile
import typing

DEBUG_PINK = False

def main():
    with tempfile.TemporaryDirectory() as temporary_directory:
        temp_dir = pathlib.Path(temporary_directory)
        with open("bn6f.gba", "rb") as rom_file:
            rom = ROM(rom_file)

            # map->objectlist table for centraltown: off_804E738
            # mapgroup->mapgraphics table: off_80329A8

            MAP_GROUP_CENTRAL_TOWN = 1
            MAP_GROUP_SEASIDE_TOWN = 3
            mapgroup_to_objectlist_addresses = {
                MAP_GROUP_CENTRAL_TOWN: 0x804e738,
                MAP_GROUP_SEASIDE_TOWN: 0x80596e0,
            }

            mapgroup_index = int(sys.argv[1], 0)
            map_index = int(sys.argv[2], 0)

            (table_start_address,) = rom.unpack_at_address(0x80329a8 + mapgroup_index*4, "<I")
            for _ in [0]: # @@@ delete plz
                print(f"=== area #{map_index} in table 0x{table_start_address:08x} ===")

                rom_file.seek(address_to_rom_offset(table_start_address + 0xc*map_index))
                area_header = rom_file.read(3 * 4)
                (tile_set_address, palettes_address, maps_address) = struct.unpack("<III", area_header)

                rom_file.seek(address_to_rom_offset(maps_address))
                maps_header = rom_file.read(12)
                (map_width, map_height, _unknown_2, _unknown_3, maps_data_start_offset, maps_compressed_size) = struct.unpack("<BBBBII", maps_header)
                print(f"unknown_2: 0x{_unknown_2:02x}")
                print(f"unknown_3: 0x{_unknown_3:02x}")
                rom_file.seek(maps_data_start_offset - 12, os.SEEK_CUR)
                maps_compressed_data = rom_file.read(maps_compressed_size)
                maps_data = decompress(maps_compressed_data)
                bottom_layer_maps_data = maps_data[:map_width * map_height * 2]
                top_layer_maps_data = maps_data[map_width * map_height * 2:]

                rom_file.seek(address_to_rom_offset(palettes_address))
                palettes_header = rom_file.read(4)
                (palettes_size,) = struct.unpack("<I", palettes_header)
                palettes_data = rom_file.read(palettes_size)
                palettes = chunk(palettes_data, 256*2)
                palette = palettes[0]

                #tile_set_vram = bytearray("\x00" * )
                tile_set_data = bytearray(b"\x00" * 0x10000)
                for tile_set_number in (0, 1):
                    rom_file.seek(address_to_rom_offset(tile_set_address + tile_set_number*0xc))
                    print(f"tile_set_address={tile_set_address:#x}")
                    tile_set_header = rom_file.read(0xc)
                    (tile_set_uncompressed_word_size, tile_set_data_offset, tile_set_vram_offset) = struct.unpack("<III", tile_set_header)
                    tile_set_uncompressed_size = tile_set_uncompressed_word_size * 4
                    (tile_set_compressed_size,) = rom.unpack_at_offset(address_to_rom_offset(tile_set_address + tile_set_data_offset), "<I")
                    tile_set_compressed_size = (tile_set_compressed_size >> 8) & 0xffffff
                    print(f"{tile_set_compressed_size:#x}")
                    rom_file.seek(address_to_rom_offset(tile_set_address + tile_set_data_offset))
                    tile_set_compressed_data = rom_file.read(tile_set_compressed_size)
                    tile_set_uncompressed_data = decompress(tile_set_compressed_data)
                    tile_set_data[tile_set_vram_offset:tile_set_vram_offset+tile_set_uncompressed_size] = tile_set_uncompressed_data[:tile_set_uncompressed_size]

                tile_set_png_path = temp_dir / "tile-set.png"
                tile_set_data_path = temp_dir / "tile-set.8bpp"
                tile_set_data_path.write_bytes(tile_set_data)
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

                temp_tile_set_png_path = temp_dir / "temp-tile-set.png"
                temp_tile_set = PIL.Image.open(tile_set_png_path)
                temp_tile_set.save(temp_tile_set_png_path, transparency=0)
                import shutil
                shutil.copy(temp_tile_set_png_path, "tile-set.png")

                tile_set = PIL.Image.open(temp_tile_set_png_path)
                area_image = create_image_for_map(tile_set=tile_set, layer_map_datas=[bottom_layer_maps_data, top_layer_maps_data], map_width=map_width, map_height=map_height)
                output_file_name = f"area-{table_start_address:08x}-{map_index}.png"

                def game_coordinate_to_screen_coordinates(map_width: int, map_height: int, game_x: int, game_y: int, game_z: int) -> typing.Tuple[float, float]:
                    ISO_TILE_WIDTH = 64.0/32.0
                    ISO_TILE_HEIGHT = 32.0/32.0
                    game_tile_x = game_x / (1<<16)
                    game_tile_y = game_y / (1<<16)
                    game_tile_z = game_z / (1<<16)
                    screen_start_x = map_width*TILE_WIDTH/2
                    screen_start_y = map_height*TILE_HEIGHT/2
                    screen_x = game_tile_x * (ISO_TILE_WIDTH / 2) + game_tile_y * (ISO_TILE_WIDTH / 2) + screen_start_x
                    screen_y = (
                        -(game_tile_x * (ISO_TILE_HEIGHT / 2) - game_tile_y * (ISO_TILE_HEIGHT / 2)) + screen_start_y
                    ) - game_tile_z + 2
                    return (screen_x, screen_y)

                objectlist_addresses = mapgroup_to_objectlist_addresses[mapgroup_index]
                #print(f"{objectlist_addresses:#x}")
                (objectlist_address,) = rom.unpack_at_address(objectlist_addresses + map_index*4, "<I")
                #print(f"{objectlist_address:#x}")
                while True:
                    (sprite_kind, sprite_index, _unused_1, _unused_2, sprite_x, sprite_y, sprite_z, sprite_unknown_4) = rom.unpack_at_offset(
                        address_to_rom_offset(objectlist_address),
                        "<BBBBiiiI",
                    )
                    objectlist_address += 20
                    if sprite_kind == 0xff:
                        break
                    #print(f"\t.byte {sprite_kind:#02x}")
                    #print(f"\t.byte {sprite_index:#02x}")
                    #print(f"\t.byte {_unused_1:#02x}, {_unused_2:#02x}")
                    #print(f"\t.word {sprite_x:#08x}, {sprite_y:#08x}, {sprite_z:#08x}")
                    #print(f"\t.word {sprite_unknown_4:#08x}\n")

                    print(f"\tmap_object_spawn_data_struct [")
                    print(f"\t\tkind: {sprite_kind:#02x},")
                    print(f"\t\tindex: {sprite_index:#02x},")
                    print(f"\t\tx: {sprite_x:#08x},")
                    print(f"\t\ty: {sprite_y:#08x},")
                    print(f"\t\tz: {sprite_z:#08x},")
                    print(f"\t\tobject_id: {sprite_unknown_4:#08x},")
                    print(f"\t]")
                    print("")

                    (x, y) = game_coordinate_to_screen_coordinates(map_width=map_width, map_height=map_height, game_x=sprite_x, game_y=sprite_y, game_z=sprite_z)
                    sprite_image = get_overworld_sprite_image(rom=rom, owsprite_index=sprite_unknown_4).convert("RGBA")
                    top_left_x = int(x - sprite_image.width/2)
                    top_left_y = int(y - sprite_image.height/2)
                    if top_left_y < 0 or top_left_x < 0:
                        # @@@ this shouldn't happen.
                        continue
                    #print(top_left_x, top_left_y)
                    area_image.alpha_composite(sprite_image, (top_left_x, top_left_y), (0, 0, sprite_image.width, sprite_image.height))
                    if DEBUG_PINK:
                        for xi in range(10):
                            for yi in range(10):
                                area_image.putpixel((int(x + xi), int(y + yi)), (0xff, 0x00, 0xff, 0xff))

                area_image.save(output_file_name)
                print(f"wrote: {output_file_name}")
                subprocess.check_call(["/usr/bin/xviewer", str(output_file_name)])

def create_image_for_map(tile_set, layer_map_datas: typing.Sequence[bytes], map_width: int, map_height: int):
    tile_set_rgba = tile_set.convert("RGBA")
    map = PIL.Image.new("RGBA", (map_width * TILE_WIDTH, map_height * TILE_HEIGHT))
    for map_data in layer_map_datas:
        x = 0
        y = 0
        for offset in range(0, len(map_data), 2):
            (code,) = struct.unpack_from("<H", map_data, offset)
            tile_index = code & 0x3ff
            tile_x = tile_index * TILE_WIDTH % tile_set_rgba.width
            tile_y = 0
            tile_y = tile_index * TILE_WIDTH // tile_set_rgba.width * TILE_HEIGHT
            if tile_y > tile_set_rgba.height:
                print(f"!!! {code:#x}")
            tile_image = tile_set_rgba.crop((tile_x, tile_y, tile_x + TILE_WIDTH, tile_y + TILE_HEIGHT))
            if code & 0x0400:
                tile_image = tile_image.transpose(PIL.Image.FLIP_LEFT_RIGHT)
            # TODO(strager): v-flip
            map.alpha_composite(tile_image, (x, y))
            x += TILE_WIDTH
            if x >= map.width:
                x = 0
                y += TILE_HEIGHT
            if y >= map.height:
                break
    return map

if __name__ == "__main__":
    main()
