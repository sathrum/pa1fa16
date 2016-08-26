/*
 * Name        : type_cast.cpp
 * Author      : Luke Sathrum
 * Description : Examples of type casting in C++
 */

#include <iostream>
using std::cout;
using std::endl;

// Program execution starts here
int main() {
  // Set up variables
  int x = 9, y = 2, result_int;
  double result_double;
  // Do int division
  result_int = x / y;
  // Do double division
  result_double = x / static_cast<double>(y);

  cout << "The result of integer division was: " << result_int << endl;
  cout << "The result of double cast division was: " << result_double << endl;
  cout << "Y is still an integer: " << y << endl;

  // Let's convert a double to an int
//  int num;
//  double num2 = 4.9;
//  num = static_cast<int>(num2);
//  cout << "The value of int num is: " << num << endl;

  // This ends the program
  return 0;
}
