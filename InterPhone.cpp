// InterPhone.cpp

#include "InterPhone.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

InterPhone::InterPhone(int cc, string cn, int ac, int n, string t)
    : Phone(ac, n, t) {
  countryCode = cc;
  countryName = cn;
}
void InterPhone::dispPhone() {
  int n1, n2;
  splitPhone(&n1, &n2);
  cout << left << setw(2) << (countryName + " " + phoneType) << " +" << setw(2)
       << countryCode << " (" << areaCode << ") " << setw(3) << n1 << "-"
       << setw(4) << n2 << endl;
}