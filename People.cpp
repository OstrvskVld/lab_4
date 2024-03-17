
#include "People.h"
#include <iostream>

People::People()
: People("",0,0,0){}
People::People(string name, int age, double salary,int sal)
: name(name),age(age),salary(salary),sal(sal){}
People People::operator=(const People &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        age=rhs.age;
        salary=rhs.salary;
        sal=rhs.sal;
        return *this;
    }
}
ostream &operator<<(ostream &os, const People &obj){
    os<<" Name of persons: "<<obj.name<<" Age: "<<obj.age<<" Amount of salary: "
     <<obj.salary;
    return os;
}

void People::Salary() {
    switch (sal) {
        case 1:
            cout << " Salary is received \n";
            break;
        case 2:
            cout << " Salary is not received \n";
            break;

    }
}


