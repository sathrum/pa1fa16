/*
 * Name        : call_by_value.cpp
 * Author      : Luke Sathrum
 * Description : Working with Call-By-Value parameters through a program that
 *               will calculate a user's paycheck
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// A Global Constant
const double kRate = 150.00;

/*
 * This function calculates a paycheck based on the hours and minutes worked
 */
double Pay(int hours_worked, int minutes_worked);

// Program starts here
int main() {
  // Declare our Variables
  int hours, minutes;
  double paycheck;

  // Get hours and minutes from user
  cout << "Welcome to the program\n"
       << "Please enter the hours you worked: ";
  cin >> hours;
  cout << " and the minutes: ";
  cin >> minutes;

  // Calculate Paycheck
  paycheck = Pay(hours, minutes);

  // Set up formatting and output the result
  cout.setf(std::ios::fixed | std::ios::showpoint);
  cout.precision(2);
  cout << "You worked " << hours << " hours and " << minutes << " minutes.\n"
       << "You will be payed $" << paycheck;

  // This ends our program
  return 0;
}

/*
 * This function calculates a paycheck based on the hours and minutes worked
 */
double Pay(int hours_worked, int minutes_worked) {
  // Declare a variable to hold the total time
  double total_time;
  // Calculate the total time worked in hours
  total_time = hours_worked + (minutes_worked / 60.0);
  // Calculate and return their paycheck amount.
  return (total_time * kRate);
}
