//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include <regex>

void main_menu();
int get_user_input();
void select_menu_item(int input);
void print_main_menu();
void go_back_to_main_menu();
bool is_integer(std::string num);
void menu_item_1();
void menu_item_2();
void menu_item_3();
void menu_item_4();
void addition();
void subtraction();
void multiplication();
void division();


int main(int argc, char const *argv[]) {
  main_menu();
  return 0;
}

void main_menu() {
  print_main_menu();
  int input = get_user_input();
  select_menu_item(input);
}

int get_user_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 5;

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {  // if it is an int, check whether in range
      input = std::stoi(input_string);  // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

void select_menu_item(int input) {
  switch (input) {
    case 1:
      menu_item_1();
      break;
    case 2:
      menu_item_2();
      break;
    case 3:
      menu_item_3();
      break;
    case 4:
      menu_item_4();
      break;
    default:
      exit(1);
      break;
  }
}

void print_main_menu() {
  std::cout << "\n----------- Main menu -----------\n";
  std::cout << "|\t\t\t\t\t\t\t\t|\n";
  std::cout << "|\t1. Addition\t\t\t\t\t|\n";
  std::cout << "|\t2. Subtraction\t\t\t\t|\n";
  std::cout << "|\t3. Multiplication\t\t\t|\n";
  std::cout << "|\t4. Division\t\t\t\t\t|\n";
  std::cout << "|\t5. Exit\t\t\t\t\t\t|\n";
  std::cout << "|\t\t\t\t\t\t\t\t|\n";
  std::cout << "---------------------------------\n";
}

void go_back_to_main() {
  std::string input;
  do {
    std::cout << "\nEnter 'b' or 'B' to go back to main menu: ";
    std::cin >> input;
  } while (input != "b" && input != "B");
  main_menu();
}

// https://codereview.stackexchange.com/questions/162569/checking-if-each-char-in-a-string-is-a-decimal-digit
bool is_integer(std::string num) {
  return std::regex_match(num, std::regex("[+-]?[0-9]+"));
}

void menu_item_1() {
  std::cout << "\n>> Menu 1\n";
  std::cout << "\nSome code here does something useful\n";
  // you can call a function from here that handles menu 1
  addition();
  go_back_to_main();
}
void menu_item_2() {
  std::cout << "\n>> Menu 2\n";
  std::cout << "\nSome code here does something useful\n";
  // you can call a function from here that handles menu 2
  subtraction();
  go_back_to_main();
}
void menu_item_3() {
  std::cout << "\n>> Menu 3\n";
  std::cout << "\nSome code here does something useful\n";
  // you can call a function from here that handles menu 3
  multiplication();
  go_back_to_main();
}
void menu_item_4() {
  std::cout << "\n>> Menu 4\n";
  std::cout << "\nSome code here does something useful\n";
  // you can call a function from here that handles menu 4
  division();
  go_back_to_main();
}

void addition() {
  float num1, num2;
  std::cout << "Enter two numbers:\n";
  std::cin >> num1 >> num2;
  float sum = num1 + num2;
  std::cout << "The sum of the two numbers is: " << sum << std::endl;
}

void subtraction() {
  float num1, num2;
  std::cout << "Enter two numbers:\n";
  std::cin >> num1 >> num2;
  float difference = num1 - num2;
  std::cout << "The difference of the two numbers is: " << difference
            << std::endl;
}

void multiplication() {
  float num1, num2;
  std::cout << "Enter two numbers:\n";
  std::cin >> num1 >> num2;
  float product = num1 * num2;
  std::cout << "The product of the two numbers is: " << product << std::endl;
}

void division() {
  float num1, num2;
  std::cout << "Enter two numbers:\n";
  std::cin >> num1 >> num2;
  float quotient = num1 / num2;
  std::cout << "The quotient of the two numbers is: " << quotient << std::endl;
}