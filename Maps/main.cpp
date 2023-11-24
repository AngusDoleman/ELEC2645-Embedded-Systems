#include <iostream>
#include <map>

int main() {
  std::map <std::string, float> grade_map;
  int highest_grade = 0;
  std::string best_student = "Smith";
  grade_map["Angus"] = 71;
  grade_map["John"] = 23; 
  grade_map["Josh"] = 73;
  grade_map["Caspar"] = 65;
  grade_map["Ollie"] = 67;
  grade_map["Danny"] = 45;
  grade_map["Ashley"] = 62.5;

  std::map<std::string, float>::iterator i; //iterator that runs through the map
  
  for (i = grade_map.begin(); i != grade_map.end(); i++) {
    if(i->second > highest_grade){
      highest_grade = i->second;
      best_student = i->first;
      
    }
  }
  std::cout << "The best student is " << best_student << " with a grade of " << highest_grade << "\n";
}