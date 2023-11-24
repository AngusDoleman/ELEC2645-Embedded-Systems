#include "funcs.h"

// note that the array is described as const here so that the function cannot
// modify the contents
int sum_of_array(const int array[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  return sum;
}
// this function needs to modify the array and so isn't const
void square_array(int array[], int n) {
  for (int i = 0; i < n; i++) {
    array[i] = array[i] * array[i];
  }
}

// this function returns a random number in the range specified
int get_random_number(int low, int high) {
  int seed =
      std::chrono::high_resolution_clock::now().time_since_epoch().count();
  std::mt19937 generator(seed);
  std::uniform_int_distribution<int> distribution(low, high);
  return distribution(generator);
}

int get_min_value(const int array[], int n) {
  int min = array[0];
  //cycles the array if i< current minimum the set minimum to i
  for (int i = 1; i < n; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }

  return min;

}

int get_min_value1(int array[], int n) {
  int min1 = array[0];

  for (int i = 1; i < n; i++) {
    if (array[i] < min1) {
      min1 = array[i];
    }
  }

  return min1;

}
//calculats the minimum value stored in array1

int get_max_value(int array[], int n) {
  int max1 = array[0];

  for (int i = 1; i < n; i++) {
    if (array[i]>max1){
      max1=array[i];
    }
      
  }
  return max1;
}
//calculates the maximum value stored in array1

int get_repeated_values(int array[], int n){
  int repeated_values = 0;
  for(int i = 0; i < n; i++){
    if(array[i] == 7 ){
    repeated_values++;
    }
  }
  return repeated_values;
}
//calculates the number of time the number 7 appears in array1
