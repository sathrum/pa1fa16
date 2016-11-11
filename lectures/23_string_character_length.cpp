/*
 * Name        : string_character_length.cpp
 * Author      : Luke Sathrum
 * Description : Examples of string manipulation
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Program starts here
int main() {
  // Create out string
  string my_string = "HELLO";
  cout << "Our String is: " << my_string << endl;

  // Getting Characters
  cout << "The character at location 0 is: " << my_string.at(0) << endl;
  cout << "The character at location 3 is: " << my_string.at(3) << endl;
  cout << "The character at location 4 is: " << my_string.at(4) << endl;
  // What if we go beyond our string
//  cout << "The character at location 20 is: " << myString.at(20) << endl;

  // Setting Character
  my_string.at(0) = 'J';
  cout << "New Word: " << my_string << endl;
  my_string.at(4) = 'Y';
  cout << "New Word: " << my_string << endl;

  // Length
  cout << "The length of our string is: " << my_string.length() << endl << endl;

  // Length and Location in a for loop
  for (unsigned int i = 0; i < my_string.length(); i++) {
    cout << my_string.at(i) << endl;
  }

  // This ends our program
  return 0;
}

