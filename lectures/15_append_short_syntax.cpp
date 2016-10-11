/*
 * Name        : append_short_syntax.cpp
 * Author      : Luke Sathrum
 * Description : Examples of how to append to files and declare streams
 *               using the shorter syntax. There is 1 file associated
 *               with this program, data.txt
 */

#include <iostream>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
// We can also add the following using statements to avoid the std::
using std::ifstream;
using std::ofstream;

// Program starts here
int main() {
  cout << "Opening data.txt for appending.\n";

  // Declare our Stream and open all at once
  ofstream fout("data.txt", std::ios::app);

  // Output/Append to data.txt
  fout << "5 6 pick up sticks.\n" << "7 8 ain't C++ great!\n";

  // Close out Streams
  fout.close();

  cout << "Done appending to file.\n";

  // This ends our program
  return 0;
}

