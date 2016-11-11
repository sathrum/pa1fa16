/*
 * Name        : character_functions.cpp
 * Author      : Luke Sathrum
 * Description : Examples of character functions
 */

#include <iostream>
// Character Manipulations need their own include
#include <cctype>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Setup some characters
  char char_a = 'A', char_b = 'b', char_c = '1', char_d = ',';

  // Testing characters
  cout << "Is " << char_a << " Alpha? " << isalpha(char_a) << endl;
  cout << "Is " << char_b << " Numeric? " << isdigit(char_b) << endl;
  cout << "Is " << char_c << " AlphaNumeric? " << isalnum(char_c) << endl;
  cout << "Is " << char_d << " Punctuation? " << ispunct(char_d) << endl;

  // Testing character case
  cout << "Is " << char_a << " lowercase? " << islower(char_a) << endl;

  // Convert to lowercase
  cout << char_a << " to lower is: " << tolower(char_a) << endl;
  cout << char_a << " to lower static casted to char is: " << static_cast<char>(tolower(char_a)) << endl;

  // This ends our program
  return 0;
}
