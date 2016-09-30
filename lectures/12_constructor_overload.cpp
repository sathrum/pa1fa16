/*
 * Name        : constructor_overload.cpp
 * Author      : Luke Sathrum
 * Description : Adding overloaded constructors to our DayOfYear class.
 *               also adding some private helper functions.
 */

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

/*
 * This class represents a single day and can store information
 * about the day and month and then output that information
 */
class DayOfYear {
 public:
  // Overloaded Constructors
  DayOfYear(int month, int day);
  DayOfYear(int month);
  // Member function declarations
  void Output();
 private:
  // Private member functions
  bool IsValidMonth();
  bool IsValidDay();
  // Member Names
  int month_;
  int day_;
};

// Program starts here
int main() {
  // Create an object from the class and call the constructors
  DayOfYear today(4, 29);
  DayOfYear yesterday(0, 40);
  DayOfYear first(4);

  // Call our output() member function
  cout << "Today is ";
  today.Output();
  cout << "Yesterday was: ";
  yesterday.Output();
  cout << "The first was: ";
  first.Output();

  // This ends our program
  return 0;
}

/*
 * This constructor will set the variables month_ and day_ to the arguments
 * that are passed in.
 */
DayOfYear::DayOfYear(int month, int day) {
  // Assign the parameters
  month_ = month;
  day_ = day;
  // Some error checking
  if (!IsValidMonth()) {
    cerr << "Invalid Month\n";
    month_ = 1;
  }
  if (!IsValidDay()) {
    cerr << "Invalid Day\n";
    day_ = 1;
  }
}

/*
 * This constructor will set the variable month_ to the argument
 * that is passed in and set the day to the 1st.
 */
DayOfYear::DayOfYear(int month) {
  // Assign the parameter
  month_ = month;
  // Some error checking
  if (!IsValidMonth()) {
    cerr << "Invalid Month\n";
    month_ = 1;
  }
  // Set the day to the first
  day_ = 1;
}

/*
 * This function will output the date, replacing the month number with its
 * string representation
 */
void DayOfYear::Output() {
  // A simple output of our Month and Day
  cout << month_ << "/" << day_ << endl;
}

/*
 * This function will check and see if the current
 * month is valid
 */
bool DayOfYear::IsValidMonth() {
  // Check to make sure month is correct
  if (month_ >= 1 && month_ <= 12)
    return true;
  else
    return false;
}

/*
 * This function will check and see if the current
 * month is valid
 */
bool DayOfYear::IsValidDay() {
  // Check to make sure day is corrects
  if (day_ >= 1 && day_ <= 31)
    return true;
  else
    return false;
}
