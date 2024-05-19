#include "ShiftReg.h"

int _dataPin;
int _latchPin;
int _clockPin;

//Constructor
ShiftReg::ShiftReg(int dataPin, int latchPin, int clockPin) {
  _dataPin = dataPin;
  _latchPin = latchPin;
  _clockPin = clockPin;
}

void ShiftReg::begin(){
  pinMode(_dataPin, OUTPUT);
  pinMode(_latchPin, OUTPUT);
  pinMode(_clockPin, OUTPUT);
}


void ShiftReg::sendData(byte data) {

  digitalWrite(_latchPin, LOW);
  for (int i = 0; i <= 7; i++) {
    digitalWrite(_clockPin, LOW);
    digitalWrite(_dataPin, bitRead(data, i));
    digitalWrite(_clockPin, HIGH);
  }
  digitalWrite(_latchPin, HIGH);
}