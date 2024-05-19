/*
  ShiftReg.h - Library for Shift Register 74HC595
  Created by Mateusz Wilinski, May 19, 2024.
  Released into the public domain.
*/
#ifndef ShiftReg_h
#define ShiftReg_h

#include <arduino.h>

class ShiftReg{
  public:
    //Constructor
    ShiftReg(int dataPin, int latchPin, int clockPin);

    //Methods
    void begin();
    void sendData(byte data);
  private:

};

#endif