/*
 * Name        : do_while.cpp
 * Author      : Luke Sathrum
 * Description : Introduction to do-while loops
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Setup Variable
  int count_down;

  // Get count_down
  cout << "How many greetings do you want? ";
  cin >> count_down;

  // Counting Iterations
  int iteration = 1;

  do {
    cout << "Hello ";
    cout << " (Iteration #" << iteration << ")\n";
    count_down--;
    iteration++;
  } while (count_down > 0);

  cout << "\nThat's all!\n";

  // This ends our program
  return 0;
}
