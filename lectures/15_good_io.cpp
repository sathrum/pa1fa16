/*
 * Name        : good_io.cpp
 * Author      : Luke Sathrum
 * Description : Gets the first line of a file and outputs it to the user. There
 *               is 1 file associated with this program, good_data.txt. Try this
 *               example with and without this file.
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
// We can also add the following using statements to avoid the std::
using std::ifstream;
using std::ofstream;

// Program starts here
int main() {
  // Declare our Stream and open all at once
  ifstream fin("good_data.txt");
  string first_line;

  // Test to see if the file exists
  if (fin.fail()) {
    cerr << "Error opening file.\n";
    exit(1);
  }
  // Get the first line of the file
  fin >> first_line;
  // Output the first line of the file
  cout << first_line << endl;

  // Close our Stream
  fin.close();

  // This ends our program
  return 0;
}

