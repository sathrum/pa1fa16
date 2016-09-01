/*
 * Name        : cinReader_Example.cpp
 * Author      : Luke Sathrum
 * Description : Demonstrates how to get input from the user
 *               using the class CinReader
 * Sources     : CinReader (Created by Boyd Trolinger)
 */

#include <iostream>
#include <string>
#include "CinReader.h"
using std::cout;
using std::endl;
using std::string;

// Program starts here
int main() {
  // Create CinReader instance
  CinReader reader;

  // Create the variables we will be using
  int int_var;
  double double_var;
  bool bool_var;
  char char_var;
  string string_var;

  // Getting Integers
  cout << "Please enter an integer value ";
  int_var = reader.readInt();
  cout << "You entered: " << int_var << endl << endl;
  // Limiting the integer range
  cout << "Please enter another integer in the range of 1-10 ";
  int_var = reader.readInt(1, 10);
  cout << "You entered: " << int_var << endl << endl;

  // Getting doubles
  cout << "Please enter a double value ";
  double_var = reader.readDouble();
  cout << "You entered: " << double_var << endl << endl;

  // Getting booleans
  cout << "Please enter a boolean value (t/f) ";
  bool_var = reader.readBool();
  cout << "You entered (0 = false, 1 = true): " << bool_var << endl << endl;

  // Getting chars
  cout << "Please enter a single character ";
  char_var = reader.readChar();
  cout << "You entered: " << char_var << endl << endl;

  // Limiting char input
  cout << "Please enter a single character (It can only be A, a, Z, or z) ";
  char_var = reader.readChar("AaZz");
  cout << "You entered: " << char_var << endl << endl;

  // Getting strings
  cout << "Please enter a string value ";
  string_var = reader.readString();
  cout << "You entered: " << string_var << endl << endl;

  // Not allowing the empty string ""
  cout << "Please enter a string value, it cannot be empty ";
  string_var = reader.readString(false);
  cout << "You entered: " << string_var << endl << endl;

  // Only accepting a set number of characters
  cout << "Please enter a string value, less than 10 characters ";
  string_var = reader.readString(true, 10);
  cout << "You entered: " << string_var << endl << endl;

  // This ends our program
  return 0;
}
