/*
 * Name        : dynamic.cpp
 * Author      : Luke Sathrum
 * Description : Examples of creating pointers and dynamic variables.
 */

#include <iostream>
using std::cout;
using std::endl;

// Program starts here
int main() {
  // Creating some pointers
  int *p1, *p2;

  // Creating a dynamic variable
  p1 = new int;
  // Assigning the value 42 to the dynamic variable
  *p1 = 42;
  // Assigning the location of the dynamic variable to pointer p2
  p2 = p1;

  cout << "*p1 == " << *p1 << endl;
  cout << "*p2 == " << *p2 << endl;

  // Assigning the value 53 to the variable p2 is pointing to
  *p2 = 53;
  cout << endl;
  cout << "*p1 == " << *p1 << endl;
  cout << "*p2 == " << *p2 << endl;

  // Creating another dynamic variable
  p1 = new int;

  // Outputting the value of the new dynamic variable (Garbage)
  cout << endl;
  cout << "*p1 == " << *p1 << endl;
  cout << "*p2 == " << *p2 << endl;

  // Assigning the value 88 to the dynamic variable
  *p1 = 88;
  cout << endl;
  cout << "*p1 == " << *p1 << endl;
  cout << "*p2 == " << *p2 << endl;

  // This ends our program
  return 0;
}
