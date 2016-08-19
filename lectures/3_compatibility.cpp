/*
 * Name        : compatibility.cpp
 * Author      : Luke Sathrum
 * Description : Shows compatibility between types
 */

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// Program execution starts here
int main() {
  // Declare some variables
  int int_var;
  double double_var;
  char char_var;
  string string_var;

  // This is bad form. 2.99 is a double and we are storing it as an int
  int_var = 2.99;
  cout << "int_var: " << int_var << endl;

  // This is OK
  double_var = 2;
  cout << "double_var: " << double_var << endl;

  // This is bad form
  char_var = 20.2;
  cout << "char_var: " << char_var << endl;

  // This is bad form
  string_var = 27;
  cout << "string_var: " << string_var << endl;

  // This ends the program
  return 0;
}
