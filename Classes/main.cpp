//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "Circle.h"
#include "Square.h"

int main() {
  Circle circle;
  circle.set_radius(1.0);
  float area = circle.get_area();
  std::cout << "The circle has an area of " << area << " m^2.\n";
  float circumference = circle.get_circumference();
  std::cout << "The circle has an circumference of " << circumference << " m.\n";

  Square square;
  square.set_length(2.0);
  float squarearea = square.get_squarearea();
  std::cout << "The square has an area of " << squarearea << " m^2.\n";
  float perimeter = square.get_perimeter();
  std::cout << "The square has a perimeter of " << perimeter << " m.\n";
  return 0;
}