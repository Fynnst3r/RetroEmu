#include "../inc/Ppu.hpp"

// 160x144 pixel screen
// background layer 256x256 pixel (32x32 tiles) map containing static tiles.
// refresh rate 59.7 Hz

class Ppu {
private:
	vram, oam
public:
  Ppu();
  ~Ppu();
};
