/*
 * Name        : strings.cpp
 * Author      : Luke Sathrum
 * Description : Examples of string operators
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Program starts here
int main() {
  // Built in types turn purple
  int my_int;
  // Strings are not built in types, so they don't turn purple.
  // They do turn green
  string my_string;

  // Use = for assignment
  my_string = "Hello";
  // Use + for concatenation
  my_string = my_string + " World!";
  // Output the string
  cout << my_string << endl;

  // Let's create a second string that is all lowercase
  string lower_string = "hello world!";

  // Compare the string
  if (my_string > lower_string)
    cout << "\nmy_string > lower_string\n";
  else
    cout << "\nmy_string <= lower_string\n";

  // Test for empty string
  string empty_string;

  if (empty_string == "")
    cout << "\nempty_string is empty\n";

  // This ends our program
  return 0;
}
