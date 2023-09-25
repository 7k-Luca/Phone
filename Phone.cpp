// Phone.cpp

#include "Phone.h"
#include <iostream>
#include <string>
using namespace std;

Phone::Phone(int ac, int n, string t) {
areaCode = ac;
number = n;
phoneType = t;
}
void Phone::splitPhone(int* nP1, int* nP2) {
*nP1 = number / 10000;
*nP2 = number % 10000;
}
void Phone::dispPhone() {
// empty virtual function
}