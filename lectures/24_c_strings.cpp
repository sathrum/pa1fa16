/*
 * Name        : c_strings.cpp
 * Author      : Luke Sathrum
 * Description : Examples of creating C-Strings
 */

#include <iostream>
// A new include
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Create a C-String
  char c_string[] = "Hello";
  int counter = 0;
  // Output our C-String
  cout << "The C-String is: " << c_string << endl;

  // Loop through all characters in our C-String
  while (c_string[counter] != '\0') {
    cout << c_string[counter] << endl;
    counter++;
  }

  // Get input from a user and put in a c_string
  // NOTE: Must be AT MOST 5 characters
  cout << "Enter a word that is 5 chracters or less: ";
  cin >> c_string;
  cout << "You entered " << c_string << endl;

  // This ends our program
  return 0;
}

