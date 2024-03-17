#ifndef LABA_4_PEOPLE_H
#define LABA_4_PEOPLE_H
#include <iostream>

using namespace std;

class People {
protected:
    string name;
    int age;
    double salary;
    int sal;
public:
    People();
    People(string name, int age, double salary,int sal);
    friend ostream &operator <<(ostream &os,const People &obj);
    People operator=(const People& rhs);
    virtual void Salary() final;
    virtual ~People(){};
};


#endif //LABA_4_PEOPLE_H
