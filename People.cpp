
#include "People.h"
#include <iostream>

People::People()
: People("",0,0){}
People::People(string name, int age, double salary)
: name(name),age(age),salary(salary){}
People People::operator=(const People &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        age=rhs.age;
        salary=rhs.salary;
        return *this;
    }
}
ostream &operator<<(ostream &os, const People &obj){
    os<<" Name of person: "<<obj.name<<" Age: "<<obj.age<<" Amount of salary: "
      <<obj.salary;
    return os;
}