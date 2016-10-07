/*
 * Name        : array_parameters.cpp
 * Author      : Luke Sathrum
 * Description : Using arrays as parameters in functions
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// A dummy class
class MyClass {
 public:
  void FillUp(int a[], int size);
};

// Program starts here
int main() {
  // Create an instance of MyClass
  MyClass object;
  // Create our array and a variable to hold the size
  int score[5], number_of_scores = 5;
  // Call FillUp with an array parameter
  object.FillUp(score, number_of_scores);
  // Output the Scores
  for (int i = 0; i < 5; i++) {
    cout << "The score of test " << (i + 1) << " is " << score[i] << endl;
  }

  // This ends our program
  return 0;
}

/*
 * This function will get size number of inputs and store it in a[]
 */
void MyClass::FillUp(int a[], int size) {
  cout << "Enter " << size << " scores:\n";
  for (int i = 0; i < size; i++) {
    cin >> a[i];
  }
}

