/*
 * Name        : escape_constants.cpp
 * Author      : Luke Sathrum
 * Description : Shows common escape sequences and how to create constants
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Program execution starts here
int main() {
  // \n - New Line
  cout << "Let's enter a new line\nThis is a new line\n";

  // \t Horizontal Tab
//  cout << "Let's put a tab between this\tand this\n";

  // \\ Backslash
//  cout << "This is NOT how we get a backslash (\) in a string\n";
//  cout << "This is how we get a backslash (\\) in a string\n";

  // \' single quote
//  char quote = '\'';
  // Incorrect way
//  char quote = ''';
//  cout << "Here is a single quote in a char type variable: " << quote << endl;

  // \" Double Quote
//  cout << "Here is a double quote in a string: \"" << endl;
  // Incorrect Way
//  cout << "Here is a double quote in a string: "" << endl;

/*
  //  Declare a constant variable
  const double kRate = 6.9;
  // What happens if we redeclare rate?
  // kRate = 7.0;

  // Declare variables needed for constant example
  double deposit, new_balance;

  // Get the deposit amount
  cout << "Enter the amount of your deposit $";
  cin >> deposit;

  double new_balance;
  new_balance = deposit + (deposit * (kRate / 100));
  cout << "The current rate is: " << kRate << endl;
  cout << "In one year, that deposit will grow to \n"
       << "$" << new_balance << ", an amount worth waiting for.\n";
*/
  // This ends the program
  return 0;
}
