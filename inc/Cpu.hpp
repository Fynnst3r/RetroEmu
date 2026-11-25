#pragma once

#include <cstdint>

class Cpu {
private:
  // general registers
  uint8_t a, b, c, d, e, h, l;

  // program counter, stack pointer
  uint16_t pc, sp;

  // master clock, system clock is 1/4 the frequency of Master Clock.
  float clockSpeed = 4.194304; // MHz, This is the DMG speed (OG GAMEBOY) GBC is
                               // up to 8.388608 MHz
public:
  Cpu();
  ~Cpu();
};
