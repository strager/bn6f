import PIL.Image
import os
import pathlib
import struct
import subprocess
import tempfile

gbagfx_exe = pathlib.Path(__file__).parent / "tools" / "gbagfx" / "gbagfx"

def main():
    with tempfile.TemporaryDirectory() as temporary_directory:
        temp_dir = pathlib.Path(temporary_directory)
        with open("bn6f.gba", "rb") as rom_file:
            rom_file.seek(0x4ff4ac)
            map_header = rom_file.read(12)
            (_unknown_0, map_data_start_offset, map_compressed_size) = struct.unpack("<III", map_header)
            rom_file.seek(map_data_start_offset - 12, os.SEEK_CUR)
            map_compressed_data = rom_file.read(map_compressed_size)
            map_data = decompress(map_compressed_data)

            rom_file.seek(0x4ff308+4)
            palette = rom_file.read(256 * 2)

            rom_file.seek(0x4fafcc)
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

            tile_set = PIL.Image.open(tile_set_png_path)
            create_image_for_map(tile_set=tile_set, map_data=map_data).save("acdc.png")

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

def create_image_for_map(tile_set, map_data: bytes):
    map = PIL.Image.new("RGBA", (1024+32, 2048))
    x = 0
    y = 0
    for offset in range(0, len(map_data), 2):
        (code,) = struct.unpack_from("<H", map_data, offset)
        tile_index = code & 0xfff
        tile_x = tile_index * TILE_WIDTH % tile_set.width
        tile_y = 0
        tile_y = tile_index * TILE_WIDTH // tile_set.width * TILE_HEIGHT
        #tile_y = tile_index * TILE_HEIGHT * (tile_index * TILE_WIDTH // tile_set.width)
        tile = tile_set.crop((tile_x, tile_y, tile_x + TILE_WIDTH, tile_y + TILE_HEIGHT))
        #x = (offset // 2) * TILE_WIDTH % map.width
        #y = (offset // 2) * TILE_WIDTH // tile_set.width * TILE_HEIGHT
        if tile_index > 0:
            pass
            #print(f"${offset:04x}: placing {tile_index:04x} at <{x},{y}> (from <{tile_x},{tile_y}>)")
        map.paste(tile, (x, y, x + TILE_WIDTH , y + TILE_HEIGHT))
        x += TILE_WIDTH
        if x >= map.width:
            x = 0
            y += TILE_HEIGHT
        if y >= map.height:
            break
    print(f"ended at offset={offset}")
    return map

if __name__ == "__main__":
    main()
