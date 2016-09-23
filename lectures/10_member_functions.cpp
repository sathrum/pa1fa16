/*
 * Name        : member_functions.cpp
 * Author      : Luke Sathrum
 * Description : Fleshing out our Math class with a member function to
 *               output our value_ member variable
 */

#include <iostream>
using std::cout;
using std::endl;

/*
 * This class represents a math object and uses its members to make calculations
 */
class Math {
 public:
  // Member function prototype
  void OutputCurrentValue();
  // Member Names
  int value_;
  int extra_input_;
};

// Program starts here
int main() {
  // Create an object from the class
  Math math_object;
  // Set our member variables for the math object
  math_object.value_ = 5;
  math_object.extra_input_ = 2;

  // This is a function call
  math_object.OutputCurrentValue();

  // This ends our program
  return 0;
}

/*
 * This function will output the date, replacing the month number with its
 * string representation
 */
void Math::OutputCurrentValue() {
  // Output the current value
  cout << "Current Value: " << value_ << endl;
}
