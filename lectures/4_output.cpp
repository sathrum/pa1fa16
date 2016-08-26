/*
 * Name        : output.cpp
 * Author      : Luke Sathrum
 * Description : Examples of output to the console in C++
 */

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

// Program execution starts here
int main() {
  // A simple output to the user
  cout << "Hello reader.\n"
       << "Welcome to C++\n";

  // Output using variables
  int number_of_games = 5;
  cout << "The number of games played is " << number_of_games << endl;

  // Arithmetic Operations in cout
  int hands_per_game = 3;
  cout << "You played a total of " << (hands_per_game * number_of_games)
       << " hands.\n";

  // No spaces or line breaks
  cout << "You played a total of" << (hands_per_game * number_of_games) << "hands.";
  cout << "You need to play more hands to get better";

  // Formatting output
  // Before formatting
  double price = 78.5;
  cout << "Price is: $" << price << endl;

  // After formatting
  cout.setf(std::ios::fixed|std::ios::showpoint);
  cout.precision(2);
  cout << "Price is: $" << price << endl;

  // Change the precision
  cout.precision(4);
  cout << "Price is: $" << price << endl;

  // cerr
  cerr << "We would use cerr to output errors from the program.\n";

  // This ends the program
  return 0;
}
