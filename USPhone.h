// USPhone.h

#ifndef USPHONE_H
#define USPHONE_H
#include "Phone.h"

class USPhone : public Phone {
public:
USPhone(int ac, int n, string t);
void dispPhone();
};

#endif