import PIL.Image
import os
import pathlib
import struct
import subprocess
import tempfile
import typing
from util import get_overworld_sprite_image, ROM, address_to_rom_offset

def main():
    with open("bn6f.gba", "rb") as rom_file:
        rom = ROM(rom_file)
        owsprite_index = 0x7d
        image = get_overworld_sprite_image(rom=rom, owsprite_index=owsprite_index)
        image.save("tile-set.png")
        print("wrote tile-set.png")

if __name__ == "__main__":
    main()
