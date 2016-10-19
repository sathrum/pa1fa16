/*
 * Name        : advanced_scope.cpp
 * Author      : Luke Sathrum
 * Description : Class Examples of Block Scope and for loop scope
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // We have blocks inside of blocks
  int number = 1;
  {
    int number = 2;
    cout << "Inside the inner block\n";
    cout << "The number is: " << number << endl;
  }
  cout << "Inside the outer block\n";
  cout << "The number is: " << number << endl;

  // for loop example
//  int i = 5;
  for (int i = 1; i < 5; i++) {
    cout << "The value of i is: " << i << endl;
  }
  // What if we want to access i here?
//  cout << "The value of i is: " << i << endl;

  // This ends our program
  return 0;
}

// What if we wanted to output the value of number here?
//cout << "The number outside main is: " << number << endl;
