/*
 * Name        : precedence.cpp
 * Author      : Luke Sathrum
 * Description : Examples of Operator Precedence
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Declare our Variables
  int a = 20, b = 10, c = 15, d = 5, e;

  // Arithmetic Precedence
  // Run the first example (20 + 10) * 15 / 5
  e = (a + b) * c / d;
  cout << "Value of (a + b) * c / d is    :" << e << endl;

  // Run the second example ((20 + 10) * 15) / 5
  // This is the preferred style
  e = ((a + b) * c) / d;
  cout << "Value of ((a + b) * c) / d is  :" << e << endl;

  // Run the third example (20 + 10) * (15 / 5)
  e = (a + b) * (c / d);
  cout << "Value of (a + b) * (c / d) is  :" << e << endl;

  // Run the fourth example 20 + (10 * 15) / 5
  e = a + (b * c) / d;
  cout << "Value of a + (b * c) / d is    :" << e << endl;

  // Combined Precedence
  int x = 5, y = 2;
  if (x + 1 < -2 || x + 1 > 3)
    cout << "Combined Precedence was TRUE\n";
  else
    cout << "Combined Precedence was FALSE\n";

  y = y + 1 < -2 || ++x + 2 * 3 >= 12;
  cout << "Y is (1 = true, 0 = false): " << y << endl;

  // This ends our program
  return 0;
}

