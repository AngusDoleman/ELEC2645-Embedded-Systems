//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <cmath>
#include <iostream>

const double PI = 3.14159265359;

void circular(double radius, double &area, double &volume);
void currency_convert(float gbp, float &usd, float &Euro, float &Yuan, float &Nigerian_naira, float &Russian_Rouble);

int main() {
  double area, volume;
  float gbp, usd, Euro, Yuan, Nigerian_naira, Russian_Rouble;
  circular(1.0, area, volume);
  std::cout << "Area = " << area << ", Volume = " << volume << std::endl;
  std::cout <<"Enter GBP amount: \n";
  std::cin >> gbp;
  currency_convert(gbp, usd, Euro, Yuan, Nigerian_naira, Russian_Rouble);
  std::cout<< "Here are the values after the conversions \n USD: " << usd << "\n Euro: " << Euro << "\n Yuan: " << Yuan << "\n Nigerian naira: " << Nigerian_naira << "\n Russian Rouble: " << Russian_Rouble << std::endl;
  
}

void circular(double radius, double &area, double &volume) {
  area = PI * pow(radius, 2.0);
  volume = (4.0 / 3.0) * PI * pow(radius, 3.0);
}

void currency_convert(float gbp, float &usd, float &Euro, float &Yuan, float &Nigerian_naira, float &Russian_Rouble){
  usd = gbp*1.22;
  Euro = gbp*1.15;
  Yuan = gbp*8.93;
  Nigerian_naira = gbp*933.18;
  Russian_Rouble = gbp*115.36;
  
  
}