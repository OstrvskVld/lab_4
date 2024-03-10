#ifndef LABA_4_PEOPLE_H
#define LABA_4_PEOPLE_H
#include <iostream>

using namespace std;

class People {
protected:
    string name;
    int age;
    double salary;
public:
    People();
    People(string name, int age, double salary);
    friend ostream &operator <<(ostream &os,const People &obj);
    People operator=(const People& rhs);
    ~People(){};
};


#endif //LABA_4_PEOPLE_H
