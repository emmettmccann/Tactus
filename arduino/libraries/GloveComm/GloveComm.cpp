#include "Arduino.h"
#include "GloveComm.h"

GloveComm::GloveComm() {
  Serial.begin(9600);
  _buffer = "";
}

GloveComm::setAxis(String _name, int value) {
  _buffer = _buffer + " " + _name + " " + value + " ";
}

GloveComm::sendAll() {
  Serial.print(_buffer);
  _buffer = "";
}

