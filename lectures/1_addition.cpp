/*
 * Name        : addition.cpp
 * Author      : Luke Sathrum
 * Description : Converting Pseudocode to C++ Code
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts execution here
int main() {
  // Setup storage
  int num1, num2, sum;
  // Get number 1 from user and store it
  cout << "Please enter the first number: ";
  cin >> num1;
  // Get number 2 from user and store it
  cout << "Please enter the second number: ";
  cin >> num2;
  // Add number 1 and number 2 and store the result
  sum = num1 + num2;
  // Output the result to the user
  cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
  // This ends the program
  return 0;
}

