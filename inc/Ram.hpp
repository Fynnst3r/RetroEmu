#pragma once

// HRAM (HighRam)

// RAM

/*VRAM
Stores:	All 8x8 sprites in the 'Tile Set region'
            3 color palettes with 4 shades(one transparent, depends on layer) inside a single 8Bit register
        Two Tile Maps, the background of 256x256 with 1 palette
*/

class Ram
{
  private:
  public:
    Ram();
    ~Ram();
};
