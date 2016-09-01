/*
 * Name        : switch.cpp
 * Author      : Luke Sathrum
 * Description : Using enumerated types and switch statements to calculate
 *               a toll.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Program starts here
int main() {
  // Set precision to 2
  cout.setf(std::ios::fixed | std::ios::showpoint);
  cout.precision(2);

  // Create an Enumerated variable for our vehicles
  enum Vehicles {
    kCar = 1,
    kBus = 2,
    kTruck = 3
  };

  // Declare Variables
  int vehicle_class;
  double toll = 0;
  cout << "Enter vehicle class (1 = Car, 2 = Bus, 3 = Truck): ";
  cin >> vehicle_class;

  //Make decisions based on vechicleClass
  switch (vehicle_class) {
    case kCar:
      cout << "Passenger Car.";
      toll = 0.50;
      break;
    case kBus:
      cout << "Bus.";
      toll = 1.50;
      break;
    case kTruck:
      cout << "Truck.";
      toll = 2.00;
      break;
    default:
      cout << "Unknown vehicle class!";
  }
  cout << "\nThe toll is: $" << toll << endl;

  //You can write it as an if-else
//  cout << endl << endl << endl;
//
//  if (vehicle_class == kCar) {
//    cout << "Passenger Car.";
//    toll = 0.50;
//  } else if (vehicle_class == kBus) {
//    cout << "Bus.";
//    toll = 1.50;
//  } else if (vehicle_class == kTruck) {
//    cout << "Truck.";
//    toll = 2.00;
//  } else {
//    cout << "Unknown vehicle class!";
//  }
//  cout << "\nThe toll is: $" << toll << endl;

  // This ends our program
  return 0;
}

