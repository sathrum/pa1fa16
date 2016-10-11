/*
 * Name        : programmer_defined.cpp
 * Author      : Luke Sathrum
 * Description : Example of creating a programmer defined function. We will be
 *               creating a function to determine the total cost of some items
 *               being purchased.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Function Declaration for TotalCost
double TotalCost(int number_param, double price_param);

// Program starts here
int main() {
  // Set up our Variables
  double price, bill;
  int number;

  // Get price and number from the user
  cout << "Enter the number of items purchased: ";
  cin >> number;
  cout << "Enter the price per item $";
  cin >> price;

  // Call function TotalCost
  bill = TotalCost(number, price);
  // The Magic Formula
  cout.setf(std::ios::fixed | std::ios::showpoint);
  cout.precision(2);
  // Output our computed bill
  cout << number << " items @ $" << price << " each.\n"
       << "Final bill (including tax): $" << bill << endl;

  // This ends our program
  return 0;
}

// Function Definition
/*
 * Computes the total cost, including a 5% sales tax
 * on number_param items at a cost of price_param each.
 */
// Function Header
double TotalCost(int number_param, double price_param) {
  // Function Body
  // Set up sales tax
  const double kTaxRate = 0.05;
  // Declare Variable
  double subtotal;

  // Output we are in the function
  cout << "\nWe are in function TotalCost\n"
       << "The parameter number_param has a value of " << number_param << endl
       << "The parameter price_param has a value of " << price_param << endl
       << endl;
  // Calculate the subtotal
  subtotal = price_param * number_param;
  // Return the value back to the call
  return (subtotal + (subtotal * kTaxRate));
}
