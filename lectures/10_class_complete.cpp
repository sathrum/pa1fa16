/*
 * Name        : class.cpp
 * Author      : Luke Sathrum
 * Description : Defining a class and then creating an object from it
 */

#include <iostream>
using std::cout;
using std::endl;

// Class Declaration
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

  // Currently we haven't defined our member function so we can't use it
  // today.OutputCurrentValue();

  // Output our member variables
  cout << "Math object's values are " << math_object.value_
       << " and " << math_object.extra_input_ << endl;

  // This ends our program
  return 0;
}
