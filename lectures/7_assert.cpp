/*
 * Name        : assert.cpp
 * Author      : Luke Sathrum
 * Description : Using Assertions in your code.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
// Uncomment to ignore asserts
//#define NDEBUG
#include <cassert>
using std::cout;
using std::endl;
using std::srand;
using std::time;
using std::rand;

// Program starts here
int main() {
  // Setup our variables
  int random_number;

  // Setup our Random Number seed
  srand(time(0));

  // Get a number between 1 and 2
  random_number = rand() % 2;

  // Make sure the number was indeed between 1 and 2
  assert(random_number >= 1 && random_number <= 2);

  cout << "The random number was: " << random_number << endl;

  // This ends our program
  return 0;
}
