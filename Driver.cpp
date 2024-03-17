
#include "People.h"
#include "Driver.h"

using namespace std;

Driver::Driver()
: People(), number(0), placeOfResidence(""), ownCar("","",0,"","",0,0,Engine()){};
Driver::Driver(string name, int age, double salary, int sal, double number, string placeOfResidence, Cars ownCar)
: People (name, age,  salary, sal), number{number}, placeOfResidence{placeOfResidence},ownCar(ownCar) {};
Driver Driver::operator=(const Driver &rhs) {
    if (this == &rhs)
        return *this;
    else {
        Driver::operator=(rhs);
        number = rhs.number;
        placeOfResidence = rhs.placeOfResidence;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Driver &obj){
    os<< " Number: " <<obj.number << " Place of residence: "<<obj.placeOfResidence <<  obj.ownCar;
    return os;
}
