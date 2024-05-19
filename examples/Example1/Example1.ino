#include <ShiftReg.h>
ShiftReg shiftReg(4,5,6); // ShiftReg(int dataPin, int latchPin, int clockPin);

byte databyte = 0b10000101;

void setup(){
  shiftReg.begin();
  shiftReg.sendData(databyte);

}

void loop(){}
