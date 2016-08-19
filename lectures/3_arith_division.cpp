/*
 * Name        : arith_division.cpp
 * Author      : Luke Sathrum
 * Description : Arithmetic Operators with different types
 *               and integer and double division
 */

#include <iostream>
using std::cout;
using std::endl;

// Program execution starts here
int main() {
  // First I want to show you arithmetic operators with different types
  // int + int = int;
  cout << "int 6 + int 9 = " << (6 + 9) << endl;
  // double + double = double
  cout << "double 6.1 + double 9.2 = " << (6.1 + 9.2) << endl;
  // double + int = double
  cout << "int 6 + double 9.2 = " << (6 + 9.2) << endl;

  // Double division
  cout << "double 6.0 / double 9.0 = " << (6.0 / 9.0) << endl;
  // Integer division
  cout << "int 6 / int 9 = " << (6/9) << endl;
  // To get a double result we need to make one of the numbers a double
  cout << "int 6 / double 9.0 = " << (6/9.0) << endl;

  // Mod division
  cout << "int 7 % 4 = " << (7%4) << endl;

  // Negative integer division
  cout << "int 7 / -4 = " << (7/-4) << endl;

  // This ends the program
  return 0;
}
