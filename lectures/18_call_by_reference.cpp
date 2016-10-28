/*
 * Name        : call_by_reference.cpp
 * Author      : Luke Sathrum
 * Description : Demonstrating call-by-reference parameters.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Function Prototypes
void GetNumbers(int &input1, int &input2);
void SwapValues(int &variable1, int &variable2);
void ShowResults(int output1, int output2);

// Program starts here
int main() {
  // Declare our Variables
  int first_num, second_num;

  // Call functions to do the rest of the work
  // The first two do call-by-reference. The last one does call-by-value
  GetNumbers(first_num, second_num);
  SwapValues(first_num, second_num);
  ShowResults(first_num, second_num);

  // This ends our program
  return 0;
}

/*
 * This function reads 2 integers from the user. 
 */
void GetNumbers(int &input1, int &input2) {
  cout << "Enter Integer 1: ";
  cin >> input1;
  cout << "Enter Integer 2: ";
  cin >> input2;
}

/*
 * This function swaps the values of the 2 parameters.
 */
void SwapValues(int &variable1, int &variable2) {
  int temp;
  // Swap the variable values
  temp = variable1;
  variable1 = variable2;
  variable2 = temp;
}

/*
 * This function shows the value of output1 and output2
 */
void ShowResults(int output1, int output2) {
  cout << "In reverse order the numbers are: "
       << output1 << " " << output2 << endl;
}
