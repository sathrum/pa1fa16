/*
 * Name        : dynamic_array.cpp
 * Author      : Luke Sathrum
 * Description : Examples of creating pointers and dynamic arrays. In this
 *               example we will dynamically create an array to hold student's
 *               names
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Program starts here
int main() {
  // Creating a pointer to be used for an array as well as some other variables
  string *students;
  int size, i;

  // Get the size of the array
  cout << "How many students? ";
  cin >> size;

  // Create our dynamic array
  students = new string[size];

  // Get the names of the students
  for (i = 0; i < size; i++) {
    cout << "Enter the first name of student " << (i + 1) << ": ";
    cin >> students[i];
  }

  // Output the students as a comma separated list
  cout << "The students entered were: ";
  for (i = 0; i < (size - 1); i++) {
    cout << students[i] << ", ";
  }
  cout << students[i] << endl;

  // This ends our program
  return 0;
}
