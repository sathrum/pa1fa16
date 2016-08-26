/*
 * Name        : input.cpp
 * Author      : Luke Sathrum
 * Description : Shows hows to get user input in C++
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Program starts here
int main() {
  // Setup our variables
  int num1, num2;

  // Prompt the user
  cout << "Please enter an integer number: ";

  // Get a number from the user
  cin >> num1;
  cout << "The number you entered was: " << num1 << endl;

  // Get multiple numbers from the user
  cout << "Please enter 2 integer numbers separated by a space: ";
  cin >> num1 >> num2;
  cout << "You entered the numbers " << num1 << " and " << num2 << endl;

  // Get a string from a user
  string word;
  cout << "Please enter a word:\n";
  cin >> word;
  cout << "The word you entered was:\n" << word << endl;

  // This ends our program
  return 0;
}
