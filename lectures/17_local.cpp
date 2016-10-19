/*
 * Name        : local.cpp
 * Author      : Luke Sathrum
 * Description : Examples of local variables
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Function Declaration for Dummy
void Dummy(int one);

// Class Declaration
class DummyClass {
 public:
  // Default constructor
  DummyClass();
  // Member Function Declaration
  void Add(int one);
 private:
  // Private Member Names
  double two;
};

// Program starts here
int main() {
  // Setup some local variables
  double one = 1;
  int two = 2;
  // Output one plus two
  cout << "local one + local two = " << (one + two) << endl;
  // Get output of Dummy()
  Dummy(two);
  // Create an object from DummyClass
  DummyClass object;
  object.Add(two);

  // This ends our program
  return 0;
}

// Just a dummy function to show scope
void Dummy(int one) {
  // Note that one ^^^ is a local variable of the function Dummy
  int two = 5;
  cout << "Dummy() one + Dummy() two = " << (one + two) << endl;
}

// Default Constructor for DummyClass to set member variable two to 10
DummyClass::DummyClass() {
  two = 10;
}

// Add Function of DummyClass
void DummyClass::Add(int one) {
  cout << "DummyClass()::Add one + DummyClass()::Add two = "
       << (one + two) << endl;
}
