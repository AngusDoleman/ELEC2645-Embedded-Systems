//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon


#include <iostream>
#include "funcs.h"


int main() {
  std::cout << "Enter an integer number: ";
  int a, b;
  float r;
  float height, weight;
  std::cin >> a;
  std::cout << "Now enter another integer number: ";
  std::cin >> b;
  int my_sum = sum(a,b);
  std::cout << "The sum of the numbers is " << my_sum << std::endl << std::endl;
  
  std::cout << "Enter the radius of your circle: ";
  std::cin >> r;
  float circle_area = area(r);
  std::cout << "The area of your circle: " << circle_area << 
std::endl << std::endl;
  
  std::cout << "Enter your height in m: ";
  std::cin >> height;
  std::cout << "Now enter your weight in kg: ";
  std::cin >> weight;
  float your_bmi = bmi(weight,height);
  std::cout << "Your BMI is " << your_bmi << std::endl << std::endl;
   
}