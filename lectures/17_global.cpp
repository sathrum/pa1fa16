/*
 * Name        : global.cpp
 * Author      : Luke Sathrum
 * Description : Examples of a global constant PI being used inside multiple
 *               functions.
 */

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

// Declare PI as a global constant
const double kPi = 3.14159;

// Create a circle class
class Circle {
 public:
  // Constructor to set the radius
  Circle(double radius);
  /*
   * This function calculates the area of the circle
   */
  double Area();
  /*
   * This function calculates the circumference of a circle
   */
  double Circumference();
 public:
  // Private Member Names
  double radius_;
};

// Program starts here
int main() {
  // Use our global constant
  cout << "For reference PI is defined as " << kPi << endl;

  // Create some Circles
  Circle five(5), ten(10);
  // Output our functions
  cout << "The area of radius 5 is " << five.Area() << endl;
  cout << "The circumference of radius 10 is " << ten.Circumference() << endl;

  // This ends our program
  return 0;
}

// Constructor
Circle::Circle(double raduis) {
  radius_ = raduis;
}
// Area
double Circle::Area() {
  // Use our Global Constant
  return kPi * pow(radius_, 2);
}
// Circumference
double Circle::Circumference() {
  return kPi * radius_ * 2;
}
