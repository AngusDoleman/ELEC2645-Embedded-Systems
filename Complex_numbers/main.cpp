#include <iostream>
#include <complex>

int main() {
  float frequency;
  float capacitance;
  std::complex<double> impedance;
  std::complex<double> cmplx2(2,4);
  std::complex<double> cmplx3(5,1);
  std::complex<double> cmplx4;
  std::cout << "Enter frequency (Hz) \n";
  std::cin >> frequency;
  std::cout << "Enter capacitance (F) \n";
  std::cin >> capacitance;
  impedance.real(0);
  impedance.imag(1/(2*3.14*frequency*capacitance));
  std::cout << "Impedance = " << impedance << "Ohms \n";
  cmplx4 = cmplx3 * cmplx2; //using cmplx number library to try sum cmplx numbers for fun
  std::cout << cmplx4 << " \n";
  

  
}