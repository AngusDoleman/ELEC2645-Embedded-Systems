#include "Square.h"

void Square::set_length(float length) { _length = length; }

float Square::get_perimeter() {
  _perimeter = _length * 4;
  return _perimeter;
}

float Square::get_squarearea() {
  _squarearea = _length * _length;
  return _squarearea;
}