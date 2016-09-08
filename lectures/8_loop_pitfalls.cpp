/*
 * Name        : loop_pitfalls.cpp
 * Author      : Luke Sathrum
 * Description : Showing common problems with loops
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Putting an extra semicolon in the in the for loop
  // This should output something 10 times, but it only does it once
  int number;
  for (number = 10; number >= 0; number--);
    cout << "T minus " << number << " seconds and counting...\n";

  // Infinite Loops
  // Simple example
//  while (true)
//    cout << 0;

  // Output even numbers from 2 - 10
  int x = 2;
  while (x != 12) {
    cout << x << " ";
    x = x + 2;
  }

  // Now what if we want to do the odd numbers from 1 - 11
  // This will result in an infinite loop. Better to write boolean expression
  // as x < 12
//  x = 1;
//  while (x != 12) {
//    cout << x << " ";
//    x = x + 2;
//  }

  // This ends our program
  return 0;
}
