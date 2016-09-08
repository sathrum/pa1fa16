/*
 * Name        : while_loop.cpp
 * Author      : Luke Sathrum
 * Description : Introduction to while loops
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // A while loop
  int count_down;
  cout << "How many greetings do you want? ";
  cin >> count_down;

  // Counting Iterations
  int iteration = 1;

  while (count_down > 0) {
    cout << "Hello ";
    cout << " (Iteration #" << iteration << ")\n";
    count_down--;
    iteration++;
  }
  cout << "\nThat's all!\n";

  // This ends our program
  return 0;
}
