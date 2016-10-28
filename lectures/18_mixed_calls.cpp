/*
 * Name        : mixed_calls.cpp
 * Author      : Luke Sathrum
 * Description : Demonstrating call-by-reference and call-by-value parameters.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Function Declaration
void DoStuff(int par_by_value, int &par_by_ref);

// Program starts here
int main() {
  // Declare our Variables
  int first, second;

  // Initialize our variables
  first = 1;
  second = 2;

  // Output the values of first and second
  cout << "first before function call: " << first << endl;
  cout << "second before function call: " << second << endl << endl;

  // Call DoStuff()
  DoStuff(first, second);

  // Output the values of first and second
  cout << endl;
  cout << "first after function call: " << first << endl;
  cout << "second after function call: " << second << endl;

  // This ends our program
  return 0;
}

/*
 * This function sets the values of par_by_value and par_by_ref and outputs
 * their values
 */
void DoStuff(int par_by_value, int &par_by_ref) {
  // Set the value of par_by_value
  par_by_value = 111;
  cout << "par_by_value in function call: " << par_by_value << endl;

  // Set the value of par_by_ref
  par_by_ref = 222;
  cout << "par_by_ref in function call: " << par_by_ref << endl;
}
