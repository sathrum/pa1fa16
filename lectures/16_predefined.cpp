/*
 * Name        : predefined.cpp
 * Author      : Luke Sathrum
 * Description : Examples of calling predefined functions. We will be computing
 *               the size of a doghouse based on the user's budget
 */

#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Set up the cost per square foot for the doghouse
  const double kCostPerSqFt = 10.50;
  // Declare some variables
  double budget, area, length_side;
  // Get the amount budgeted for the doghouse
  cout << "Enter the amount budgeted for your doghouse $";
  cin >> budget;
  // Calculate the area of the doghouse we can build
  area = budget / kCostPerSqFt;
  // Let's use the predefined sqrt() function
  length_side = sqrt(area);
  // The Magic Formula
  cout.setf(std::ios::fixed|std::ios::showpoint);
  cout.precision(2);
  // Output our calculated information
  cout << "For the price of $" << budget << endl
       << "I can build you a luxurious square doghouse\n" << "that is "
       << length_side << " feet on each side.\n";

  // This ends our program
  return 0;
}
