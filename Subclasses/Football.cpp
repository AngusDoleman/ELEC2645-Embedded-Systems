#include "Football.h"

Football::Football() : Person(), _club{"club"}, _goals{0}, _appearances{0} {}
Football::Football(std::string forename, std::string surname, Date dob, std::string club,
                 int goals, int appearances)
    : Person{forename, surname, dob}, _club{club}, _goals{goals}, _appearances{appearances} {}

// mutators
void Football::set_club(std::string club) { _club = club; }
void Football::set_goals(int goals) { _goals = goals; }
void Football::set_appearances(int appearances) { _appearances = appearances; }
// accessors
std::string Football::get_club() { return _club; }
int Football::get_goals() { return _goals; }
int Football::get_appearances() {return _appearances; }