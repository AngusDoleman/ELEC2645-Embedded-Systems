#ifndef FOOTBALL_H
#define FOOTBALL_H

#include <string>
#include "Person.h"

class Football : public Person {
 public:
Football();
Football(std::string forename, std::string surname, Date dob, std::string club, int goals, int appearances);

// mutators
  void set_appearances(int _appearances);
  void set_goals(int _goals);
  void set_club(std::string _club);

  // accessors
  int get_appearances();
  int get_goals();
  std::string get_club();


private:
int _appearances;
int _goals;
std::string _club;

};

#endif