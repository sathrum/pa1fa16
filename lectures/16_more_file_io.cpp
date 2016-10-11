/*
 * Name        : more_file_io.cpp
 * Author      : Luke Sathrum
 * Description : Reading and writing files while checking to make sure the files
 *               are opened. It also reads from a file until it encounters the
 *               end as well as gets the filename from the user.
 */

#include <iostream>
#include <fstream>
#include <string>
// To use the function exit() to end our program
#include <cstdlib>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

// Program starts here
int main() {
  // Get the filename from the user
  string filename;
  cout << "Please enter a filename (story.txt) ";
  cin >> filename;
  // Declare and open input stream
  ifstream fin(filename.c_str());
  if (fin.fail()) {
    cerr << "Input file opening failed\n";
    exit(1);
  }

  // Let's loop through our file and add a number to the beginning of each line
  char next;
  int n = 1;
  fin.get(next);
  cout << n << " ";
  while (!fin.eof()) {
    cout << next;
    if (next == '\n') {
      n++;
      cout << n << " ";
    }
    fin.get(next);
  }

  // Close our Stream
  fin.close();

  // This ends our program
  return 0;
}

