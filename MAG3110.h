/*
mag3110.h
libary for using the I2C mag3110 magnetometer

(c) Written by Jeroen Cappaert for NanoSatisfi, August 2012
*/

#ifndef MAG3110_h
#define MAG3110_h

#include <Arduino.h>


// define magnetometer I2C address (fixed)

#define MAG_ADDR  0x0E // Magnetometer MAG3110


class MAG3110
{
  public:
    MAG3110();
    void begin();
    int readx();
    int ready();
    int readz();
  private:
};

extern MAG3110 mag3110;

#endif
