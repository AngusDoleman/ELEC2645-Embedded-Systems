//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "funcs.h"

int main() {
  // print a random number
  int random_value = get_random_number(0,100);
  std::cout << "Random number = " << random_value << std::endl;
  
  // create array and initialise
  int array[5] = {1, 2, 3, 4, 5};
  // pass the array to the function (and its size) so we can calculate the sum
  int sum = sum_of_array(array, 5);
  std::cout << "Sum = " << sum << std::endl;
  // now pass to a function to square each value
  square_array(array, 5);
  for (int i = 0; i < 5; i++) {
    array[i] = get_random_number(0,100);
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  //cycles the array calculating a random number to be assigned in every slot 
  
  // calculate the new sum
  sum = sum_of_array(array, 5);
  std::cout << "New sum = " << sum << std::endl;

  int min_value = get_min_value(array,5);
  std::cout << "Minimum value = " << min_value << "\n";
  //calculates the minimum value stored in the array


  //task 1
  int n= 20;
  int *array1 = new int[n];
  int i;
  for(i=0; i<n; i++){
    array1[i] = get_random_number(0,100);
    std::cout << "array1[" << i  << "] = " << array1[i] << 
    std::endl;  
  }

  //task 2
  int min_value1 = get_min_value(array1,n);
  std::cout << "Minimum value of array1 = " << min_value1 
  << "\n";

  //task 3
  int max_value = get_max_value(array1,n);
  std::cout << "Maximum value of array1 = " << max_value 
  << "\n";

  //task 4
  
  int repeats = get_repeated_values(array1,n);
  std::cout << "The number 7 appeared " << repeats << " times in array1. \n";
  
  
}
