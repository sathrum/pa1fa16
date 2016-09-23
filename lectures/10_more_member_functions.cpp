/*
 * Name        : more_member_functions.cpp
 * Author      : Luke Sathrum
 * Description : More Math member functions
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
  void SumTo();
  void RaiseToPower();
  // Member Names
  int value_;
  int extra_input_;
};

// Program starts here
int main() {
  // Create an object from the class
  Math math_object;

  // Calculate SumTo()
  math_object.extra_input_ = 100;
  math_object.SumTo();
  cout << "Summing to 100: ";
  math_object.OutputCurrentValue();


  // Calculate RaiseToPower()
  math_object.value_ = 5;
  math_object.extra_input_ = 2;
  math_object.RaiseToPower();
  cout << "5 ^ 2: ";
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
  cout << "The value is " << value_ << endl;
}

/*
 * This function will Sum all numbers from 1 to the given number
 * NOTE: It uses extra_input_ as the upper limit
 */
void Math::SumTo() {
  // Calculate the Sum To a number
  value_ = (extra_input_ / 2.0) * (extra_input_ + 1);
}

/*
 * This function will calculate the exponent given a base and an exponent
 * NOTE: value_ is the base and extra_input_ is the exponent
 */
void Math::RaiseToPower() {
  // Calculate the exponent
  int solution = 1;
  for (int i = 0; i < extra_input_; i++) {
    solution *= value_;
  }
  // Set the solution to value_
  value_ = solution;
}
