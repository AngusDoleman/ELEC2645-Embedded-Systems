#include <iostream>
#include <string>

int main() {
  std::string string1 = "A";
  std::cout << "Enter your string: \n";
  std::cin >> string1;
  std::string vowels = "aeiou";
  int number_of_vowels = 0;
  int n = string1.size();
  
  for(int i=0 ;i < n ; i++) {
    char letter_selected;
    letter_selected = string1[i];

    for(int i=0; i < 5; i++) {
      if(letter_selected == vowels[i]) {
        number_of_vowels = number_of_vowels + 1;
      }
    }
    
    
  }
  std::cout << "Number of vowels: " << number_of_vowels << "\n";
}