/*
 * Name        : score_array.cpp
 * Author      : Luke Sathrum
 * Description : Our first use of arrays. We will get 5 scores and see how much
 *               each differs from the highest score.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // We are going to read in five scores and show how much
  // each differs from the highest score
  int i, score[5], highest;

  // Prompt for the scores
  cout << "Enter 5 Scores:\n";
  // Get the first score
  cin >> score[0];
  // Set the score to the highest as it is the only one...
  highest = score[0];

  // Write a loop to get the rest of the scores
  for (i = 1; i < 5; i++) {
    // Get the score
    cin >> score[i];
    // Check to see if this score is larger than highest
    if (score[i] > highest)
      highest = score[i];
  }
  // Output the highest score
  cout << "The highest score is " << highest << endl
       << "The scores and their differences from the highest are\n";

  // Output the difference of the scores using a loop
  for (i = 0; i < 5; i++) {
    cout << score[i] << " off by " << (highest - score[i]) << endl;
  }

  // This ends our program
  return 0;
}
