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
            table_start_address = 0x8032a20
            for area_number in [2]:
                print(f"=== area #{area_number} in table 0x{table_start_address:08x} ===")

                rom_file.seek(address_to_rom_offset(table_start_address + 0xc*area_number))
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

                rom_file.seek(address_to_rom_offset(tile_set_address))
                tile_set_header = rom_file.read(20)
                (_unknown_0, tile_set_data_start_offset, _unknown_8, _unknown_c, tile_set_compressed_size) = struct.unpack("<IIIII", tile_set_header)
                rom_file.seek(tile_set_data_start_offset - 20, os.SEEK_CUR)
                tile_set_compressed_data = rom_file.read(tile_set_compressed_size)
                tile_set_data = decompress(tile_set_compressed_data)

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

                tile_set = PIL.Image.open(temp_tile_set_png_path)
                area_image = create_image_for_map(tile_set=tile_set, layer_map_datas=[bottom_layer_maps_data, top_layer_maps_data], map_width=map_width, map_height=map_height)
                output_file_name = f"area-{table_start_address:08x}-{area_number}.png"
                area_image.save(output_file_name)
                print(f"wrote: {output_file_name}")

def decompress(compressed_data: bytes) -> bytes:
    with tempfile.TemporaryDirectory() as temporary_directory:
        temp_dir = pathlib.Path(temporary_directory)
        compressed_file_path = temp_dir / "map.bin.lz"
        uncompressed_file_path = temp_dir / "map.bin"
        compressed_file_path.write_bytes(compressed_data)
        subprocess.check_call([gbagfx_exe, str(compressed_file_path), str(uncompressed_file_path)])
        return uncompressed_file_path.read_bytes()

TILE_WIDTH = 8
TILE_HEIGHT = 8

def create_image_for_map(tile_set, layer_map_datas: typing.Sequence[bytes], map_width: int, map_height: int):
    tile_set_rgba = tile_set.convert("RGBA")
    map = PIL.Image.new("RGBA", (map_width * TILE_WIDTH, map_height * TILE_HEIGHT))
    for map_data in layer_map_datas:
        x = 0
        y = 0
        for offset in range(0, len(map_data), 2):
            (code,) = struct.unpack_from("<H", map_data, offset)
            tile_index = code & 0xfff
            tile_x = tile_index * TILE_WIDTH % tile_set_rgba.width
            tile_y = 0
            tile_y = tile_index * TILE_WIDTH // tile_set_rgba.width * TILE_HEIGHT
            map.alpha_composite(tile_set_rgba, (x, y), (tile_x, tile_y, tile_x + TILE_WIDTH, tile_y + TILE_HEIGHT))
            x += TILE_WIDTH
            if x >= map.width:
                x = 0
                y += TILE_HEIGHT
            if y >= map.height:
                break
    return map

if __name__ == "__main__":
    main()
