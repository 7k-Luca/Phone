// USPhone.cpp

#include "USPhone.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

USPhone::USPhone(int ac, int n, string t) : Phone(ac, n, t) {}
void USPhone::dispPhone() {
  int n1, n2;
  splitPhone(&n1, &n2);
  cout << left << setw(18) << ("US " + phoneType) << setw(3) << "+1"
       << "("<< areaCode << ") " << setw(3) << n1 << "-" << setw(4) << n2 << endl;
}