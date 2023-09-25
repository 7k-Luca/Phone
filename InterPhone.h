// InterPhone.h

#ifndef INTERPHONE_H
#define INTERPHONE_H
#include "Phone.h"
#include <string>
using namespace std;

class InterPhone : public Phone {
protected:
int countryCode;
string countryName;
public:
InterPhone(int cc, string cn, int ac, int n, string t);
void dispPhone();
};

#endif