/*
 * Name        : if_else-if_else.cpp
 * Author      : Luke Sathrum
 * Description : Modifying our user's pay scenario to include if else-if else
 *               statements.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Declare Variables
  int hours;
  double rate = 30, gross_pay = 0;

  // Prompt for work hours
  cout << "How many hours did you work this week? ";
  cin >> hours;

  // if if-else else statement to compute overtime if worked
  if (hours > 40)
    gross_pay = (rate * 40) + (1.5 * rate * (hours - 40));
  else if (hours > 0)
    gross_pay = rate * hours;
  else
    cout << "You did not work this week\n";

  cout << "Your gross pay is: $" << gross_pay << endl;

  // Omitting the final else
  if (hours > 40)
    gross_pay = (rate * 40) + (1.5 * rate * (hours - 40));
  else if (hours > 0)
    gross_pay = rate * hours;

  cout << "Your gross pay is: $" << gross_pay << endl;

  // This ends our program
  return 0;
}

