/*
 * Name        : if_else.cpp
 * Author      : Luke Sathrum
 * Description : Using if/else statements calculate a user's pay, including
 *               any overtime.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Declare Variables
  int hours;
  double rate = 30, gross_pay, gross_overtime;

  // Prompt for work hours
  cout << "How many hours did you work this week? ";
  cin >> hours;

  // if-else statement to compute overtime if worked
  if (hours > 40)
    gross_pay = (rate * 40) + (1.5 * rate * (hours - 40));
  else
    gross_pay = rate * hours;

  cout << "Your gross pay is: $" << gross_pay << endl;

  // Compound Statements
//  if (hours > 40) {
//    gross_pay = (rate * 40) + (1.5 * rate * (hours - 40));
//    cout << "You worked a long week\n";
//  } else {
//    gross_pay = rate * hours;
//    cout << "Have you ever thought about working overtime?\n";
//  }
//  cout << "Your gross pay is: $" << gross_pay << endl;

  // Omitting the else
  // Calculate only the overtime pay
//  if (hours > 40) {
//    gross_overtime = (1.5 * rate * (hours - 40));
//    cout << "You worked a long week\n";
//    cout << "Your overtime pay this week was: $" << gross_overtime << endl;
//  }

  // Forgetting the braces { }
//  if (hours > 40)
//    gross_overtime = (1.5 * rate * (hours - 40));
//  cout << "You worked a long week\n";
//  cout << "Your overtime pay this week was: $" << gross_overtime << endl;

  // This ends our program
  return 0;
}
