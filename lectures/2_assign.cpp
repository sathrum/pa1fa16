/*
 * Name        : assign.cpp
 * Author      : Luke Sathrum
 * Description : Assign values to variables, testing uninitialized
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Program execution starts here
int main() {
  // Declare some variables and initialize some of them
  int int1 = 0, int2 = 10, int3;
  double double1 = 2.5, double2 = 3.3, double3;
  char char1 = 'A';

  // We can also give a char an integer value that represents
  // the ASCII character (in this case B)
  char char2 = 66;
  bool bool1 = false;
  string string1 = "This is a string";

  // Output our variables
  cout << "ints: " << int1 << ", " << int2 << ", " << int3 << endl
       << "doubles: " << double1 << ", " << double2 << ", " << double3 << endl
       << "char: " << char1 << endl
       << "char (int value): " << char2 << endl
       << "bool: " << bool1 << endl
       << "string: " << string1 << endl;

  // Working with shorthand assignment
  int1 += 5;
  double1 -= 5;

  // Output after shorthand assignment
  cout << "int: " << int1 << endl
       << "double: " << double1 << endl;

  // This ends the program
  return 0;
}
