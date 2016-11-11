/*
 * Name        : out_of_memory.cpp
 * Author      : Luke Sathrum
 * Description : Tries to allocate all the memory in the heap
 */

#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Create our pointer
  double *p1;
  // Infinite Loop to allocate a dynamic variable of type double
  while (true)
    p1 = new double;
  // This ends our program
  return 0;
}
