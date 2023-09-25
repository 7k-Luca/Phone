// Phone.h

#ifndef PHONE_H
#define PHONE_H
#include <string>
using namespace std;

class Phone {
protected:
int areaCode;
int number;
string phoneType;
public:
Phone(int ac, int n, string t);
void splitPhone(int* nP1, int* nP2);
virtual void dispPhone();
};

#endif