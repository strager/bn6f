import PIL.Image
import os
import pathlib
import struct
import subprocess
import tempfile
import typing
from util import get_overworld_sprite_image, ROM

def main():
    with open("bn6f.gba", "rb") as rom_file:
        rom = ROM(rom_file)
        owsprite_address = 0x84c3c90
        image = get_overworld_sprite_image(rom=rom, owsprite_address=owsprite_address)
        image.save("tile-set.png")
        print("wrote tile-set.png")



if __name__ == "__main__":
    main()
