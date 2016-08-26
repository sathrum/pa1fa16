/*
 * Name        : increment_decrement.cpp
 * Author      : Luke Sathrum
 * Description : Examples of the increment and decrement operators
 */

#include <iostream>
using std::cout;
using std::endl;

// Program execution starts here
int main() {
  // Set up the variables
  int a = 2, value_produced;

  // First example
  value_produced = 2 * (a++);
  cout << "a = " << a << "   value_produced = " << value_produced << endl;

  // Second Example
  a = 2;
  value_produced = 2 * (++a);
  cout << "a = " << a << "   value_produced = " << value_produced << endl;

  // These will not work
//  (a + 2)++;
//  --(a + 2);
//  ++5;

  // Don't do this
  a = 2;
  value_produced = a + (++a);
  cout << "a = " << a << "   valueProduced = " << value_produced << endl;

  // This ends the program
  return 0;
}
