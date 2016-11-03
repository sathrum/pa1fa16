/*
 * Name        : multidimensional_arrays.cpp
 * Author      : Luke Sathrum
 * Description : Using a multidimensional array to hold student's quiz scores.
 */

#include <iostream>
using std::cout;
using std::endl;

// Global Constants
const int kNumberStudents = 4, kNumberQuizzes = 3;

// Function Prototype
void OutputScores(int scores[][kNumberQuizzes]);

// Program starts here
int main() {
  // Create and initialize a multidimensional array
  int score[kNumberStudents][kNumberQuizzes] = {
                                          // Quiz 1, Quiz 2, Quiz 3
                                                  {10, 5, 7}, // Student 1
                                                  {1, 2, 3},  // Student 2
                                                  {9, 9, 8},  // Student 3
                                                  {8, 7, 5}   // Student 4
                                               };
  // Output the scores
  OutputScores(score);

  // This ends our program
  return 0;
}

/*
 * This function will output all the scores contained in scores[][]
 */
void OutputScores(int scores[][kNumberQuizzes]) {
  // To output a multidimensional array, we need a for loop for each dimension
  // This outside loop handles each student one-by-one
  for (int i = 0; i < kNumberStudents; i++) {
    cout << "Student " << (i + 1) << "'s quiz scores\n"
         << "-----------------------------------------\n";
    // This inside loop handles each individual's quiz one-by-one
    for (int j = 0; j < kNumberQuizzes; j++) {
      cout << "Quiz " << (j + 1) << ": " << scores[i][j] << endl;
    }
    cout << "-----------------------------------------\n";
  }
}
