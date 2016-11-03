/*
 * Name        : static.cpp
 * Author      : Luke Sathrum
 * Description : Working with Static Member Functions and Variables
 */

#include <iostream>
using std::cout;
using std::endl;

/*
 * A Class to show how to use static member functions and variables
 */
class StaticClass {
 public:
  /*
   * Constructor
   * Initialize our member variable num to 0
   */
  StaticClass();
  /*
   * Increment our member variable num by 1
   */
  void Increment();
  /*
   * Output the value of our member variable num to the screen
   */
  void Output();
  /*
   * Get the value of the static member variable countInvocations
   */
  static int GetCountInvocations();
 private:
  int num_;
  static int count_invocations_;
};

// Program starts here
int main() {
  // Create some StaticClass objects
  StaticClass one, two;
  // Output countInvocations
  cout << "We have called a member function "
       << StaticClass::GetCountInvocations() << " time(s).\n";
  // Call some member functions on object one
  one.Increment();
  one.Output();
  // Output countInvocations
  cout << "We have called a member function "
       << StaticClass::GetCountInvocations() << " time(s).\n";
  // Call some member functions on object two
  two.Increment();
  two.Increment();
  two.Output();
  // Output countInvocations
  cout << "We have called a member function "
       << StaticClass::GetCountInvocations() << " time(s).\n";

  // This ends our program
  return 0;
}
// Assign our static member variable a value
int StaticClass::count_invocations_ = 0;

StaticClass::StaticClass() {
  num_ = 0;
}

void StaticClass::Increment() {
  num_++;
  count_invocations_++;
}

void StaticClass::Output() {
  cout << "The current value is: " << num_ << endl;
  count_invocations_++;
}

int StaticClass::GetCountInvocations() {
  return count_invocations_;
}

