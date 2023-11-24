//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Football.h"

int main() {
  // create a 'default' Person object
  Person person;
  // default person is called 'John'
  // we can assign all the object properties using a initialiser list
  person = {"Matt", "Pitman", {27, Month::Jun, 2003}};
  // person is now called 'Peter'
  std::cout << "Your persons name is " << person.get_forename() <<" "<< person.get_surname() << std::endl;

 std::cout << person.get_forename() << " was born on "
            << person.get_dob() << std::endl;

  // Now create a student object
  Student student;
  // default student is called 'John' like the person
  // now we'll assign a profile to the student using a list
  student = {"Albert", "Einstein", {14, Month::Mar, 1879}, 201123456, 99.9};
  std::cout << person.get_forename() << " has an average of "
            << student.get_grade() << "\%. Wow! What a genius!\n";

  Football football;
  football = {"Teemu", "Pukki", {29, Month::Mar, 1990}, "Norwich", 88, 210};
    std::cout << "Your footballers name is " << football.get_forename() <<" "<< football.get_surname() << std::endl;
  std::cout << football.get_forename() << " was born on " << football.get_dob() << std::endl;
  std::cout << "Your footballer scored " << football.get_goals() <<" goals in "<< football.get_appearances() << " appearances" <<std::endl;
  
  return 0;
}