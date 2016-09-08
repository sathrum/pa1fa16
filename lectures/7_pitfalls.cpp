/*
 * Name        : pitfalls.cpp
 * Author      : Luke Sathrum
 * Description : Showing various Boolean Expression Pitfalls
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Short Circuit Evaluation
  int pieces = 10, kids;
  cout << "How many kids? ";
  cin >> kids;

  if ((pieces / kids) >= 2)
    cout << "Each child may have two pieces.\n";

  // A Better way to write it
//  if((kids != 0) && ((pieces / kids) >= 2))
//    cout << "Each child may have two pieces.\n";

// Integers as Booleans
  int time = 36, limit = 100;
  // This is a mistake
  if (!time > limit)
    cout << "There is still time";

  // Correct way to write it
//  if (!(time > limit))
//    cout << "There is still time";

// Assignment vs. Comparison
  int x = 5;
  if (x = 12)
    cout << "X is 12";

  // The correct way
//  if (x == 12)
//    cout << "X is 12";

// This ends our program
  return 0;
}

