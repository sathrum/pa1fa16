/*
 * Name        : string_functions.cpp
 * Author      : Luke Sathrum
 * Description : Examples of string functions
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Program starts here
int main() {
  // Create our string
  string my_string = "HELLO";
  cout << "Our String is: " << my_string << endl;

  // Substring
  cout << "The .substr(2, 2) is: " << my_string.substr(2, 2) << endl;

  // Empty
  if (my_string.empty() == true)
    cout << "The string is empty\n";
  else
    cout << "The string is not empty\n";

  // Insert into string
  my_string.insert(2, "LLL");
  cout << "Our new string after .insert(2, \"LLL\") is: " << my_string << endl;

  // Replace
  my_string.replace(0, 3, "___");
  cout << "Our new string after .replace(0, 3, \"___\") is: " << my_string 
       << endl;

  // Find
  cout << "The location of \"LLL\" (.find(\"LLL\")) in our string is: "
       << my_string.find("LLL") << endl;

  // Find First Of
  cout << "The first location of any of the following characters \"LUKE\" "
       << "(.find_first_of(\"LUKE\")) is: "
       << my_string.find_first_of("LUKE") << endl;

  // This ends our program
  return 0;
}

