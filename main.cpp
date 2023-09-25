/*
Luca Marinelli
phones

PIO Chart

Inputs:
  - none
Outputs:
  - "My Mini Phone Book ..."
  - Each Phone object's information in the following format:
    - USPhone: "US ---- Phone: +1 (XXX) XXX-XXXX"
    - InterPhone: "CountryName ---- Phone: +countryCode (XXX) XXX-XXXX"
Processing:
  - Create an array of 5 phone pointers.
  - Initialze each pointer with the address of a dynamically allocated USPhone or InterPhone object.
  - Step Through the array, displaying its information
*/

// main.cpp

#include "InterPhone.h"
#include "Phone.h"
#include "USPhone.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  // Displaying ttiel
  cout << "My Mini Phone Book ..." << endl << endl;

  // Delaring array
  Phone *phoneArr[5];

  // Filling array
    phoneArr[0] = new USPhone(305, 4635675, "Home Phone");
    phoneArr[1] = new InterPhone(34, "Spain", 981, 1225478, "Home Phone");
    phoneArr[2] = new USPhone(954, 2017743, "Work Phone");
    phoneArr[3] = new USPhone(303, 8287965, "Mobile Phone");
    phoneArr[4] = new InterPhone(58, "Venezuela", 414, 7308523, "Home Phone");
  // Displaying phone numbers
  for (int i = 0; i < 5; i++) {
    phoneArr[i]->dispPhone();
  }

  // Delete Pointers
  for (int i = 0; i < 5; i++) {
    delete phoneArr[i];
  }

  return 0;
}