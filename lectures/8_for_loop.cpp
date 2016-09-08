/*
 * Name        : for_loop.cpp
 * Author      : Luke Sathrum
 * Description : Introduction to for loops
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // A Simple for loop
  for (int number = 10; number >= 0; number--) {
    cout << "T minus " << number << " seconds and counting...\n";
  }

  // We can use if statements in loops
//  for (int number = 10; number >= 0; number--) {
//    if (number == 0)
//      cout << "BLASTOFF!!!\n";
//    else
//      cout << "T minus " << number << " seconds and counting...\n";
//  }

  // What happens if we forget to create our variable before we use it?
//  for (number = 10; number >= 0; number--) {
//    cout << "T minus " << number << " seconds and counting...\n";
//  }

// This ends our program
  return 0;
}
