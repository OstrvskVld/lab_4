
#include "People.h"
#include <iostream>

People::People()
: People("",0,0,""){}
People::People(string name, int age, double salary,string sal)
: name(name),age(age),salary(salary),sal(sal){}
People::People(string name, int age, double salary)
: name(name),age(age),salary(salary){}
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
    os<<" What is the employee`s name? "<<obj.name<<" Age: "<<obj.age<<" Amount of salary: "
     <<obj.salary << " Salary is/is not received? " << obj.sal;
    return os;
}

//void People::Salary() {
//    switch (sal) {
//        case 1:
//            cout << " Salary is received \n";
//            break;
//        case 2:
//            cout << " Salary is not received \n";
//            break;
//
//    }
//}


