#pragma once

#include <cstdint>

class Cpu
{
  private:
    // general registers
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;

    // program counter, stack pointer
    uint16_t pc;
    uint16_t sp;

    // master clock, system clock is 1/4 the frequency of Master Clock.
    float clockSpeed = 4.194304; // MHz, This is the DMG speed (OG GAMEBOY) GBC is
                                 // up to 8.388608 MHz
  public:
    Cpu();
    ~Cpu();
};
