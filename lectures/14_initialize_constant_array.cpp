/*
 * Name        : initialize_constant_array.cpp
 * Author      : Luke Sathrum
 * Description : Initialize an array using {} and create an array using a
 *               constant integer.
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Program starts here
int main() {
  // Create and initialize an array
  string children[] = { "John", "Jane" };
  cout << "The oldest child's name is: " << children[0] << endl;
  cout << "The youngest child's name is: " << children[1] << endl;

  // Setup a constant for another array
  const int kAgeOfChildren = 2;
  // Create the array from our constant
  int children_age[kAgeOfChildren];
  for (int i = 0; i < kAgeOfChildren; i++) {
    cout << "Enter the age of Child #" << (i + 1) << ": ";
    cin >> children_age[i];
  }

  // Output the ages
  cout << "The ages were: ";
  // Loop based on our constant and output
  for (int i = 0; i < kAgeOfChildren; i++) {
    cout << children_age[i];
    // Don't output comma at the end
    if (i < kAgeOfChildren - 1)
      cout << ", ";
  }

  // This ends our program
  return 0;
}
