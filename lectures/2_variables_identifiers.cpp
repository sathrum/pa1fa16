/*
 * Name        : variables_identifiers.cpp
 * Author      : Luke Sathrum
 * Description : Shows how to correctly and incorrectly write identifiers
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts execution here
int main() {
  // Incorrect
//  int 6num;
  // Correct
//  int num6;

  // Incorrect
//  int -num;
  // Correct
//  int num;

  // Incorrect
//  int myfirst.c;
  // Correct
//  int my_first;

  // Case Sensitive;
//  int rate = 0;
//  int RATE = 1;
//  int Rate = 2;
//  cout << "rate: " << rate << endl
//       << "RATE: " << RATE << endl
//       << "Rate: " << Rate << endl;

  // Reserved Words
//  int int;
//  double int;
//  int char;

  // Bad Naming
//  int x, y = 2, z = 3;
//  x = y * z;
//  cout << "x: " << x << endl;
  // Good Naming
//  int distance, speed = 2, time = 3;
//  distance = speed * time;
//  cout << "distance: " << distance << endl;

  // This ends the program
  return 0;
}

