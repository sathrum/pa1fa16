/*
 * Name        : dynamic_objects.cpp
 * Author      : Luke Sathrum
 * Description : Various examples of creating dynamic objects
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// This class will create a dynamic array to hold scores
class Scores {
 public:
  // Constructor to create the dynamic array of size
  Scores(int size);
  // Will prompt the user to enter the scores
  void FillUp();
  // Will Output all the scores in the array
  void Output();
 private:
  int size_;
  int *scores_;
};

// Program starts here
int main() {
  // Create the dynamic object. To call the constructor we need ()
  Scores *object = new Scores(5);
  object->FillUp();
  object->Output();

  // This ends our program
  return 0;
}

Scores::Scores(int size) {
  // Set the internal size to the parameter
  size_ = size;
  // Create the dynamic array
  scores_ = new int[size];
}

void Scores::FillUp() {
  for (int i = 0; i < size_; i++) {
    cout << "Enter score #" << (i + 1) << ": ";
    cin >> scores_[i];
  }
}

void Scores::Output() {
  for (int i = 0; i < size_; i++) {
    cout << "Score #" << (i + 1) << ": " << scores_[i] << endl;
  }
}
