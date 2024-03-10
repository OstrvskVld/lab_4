
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle()
: Vehicle("","",0,""){}
Vehicle::Vehicle(string name, string typeOfVehicle, int age, string availability)
: name(name), typeOfVehicle(typeOfVehicle), age(age), availability(availability) {}
Vehicle::Vehicle(const Vehicle &other) {
name=other.name;
typeOfVehicle=other.typeOfVehicle;
age=other.age;
availability=other.availability;
}
Vehicle::Vehicle(Vehicle &&other)
:name(other.name), typeOfVehicle(other.typeOfVehicle),age(other.age),availability(other.availability){
other.name= "";
other.typeOfVehicle= "";
other.age = 0;
other.availability = "";
}

Vehicle Vehicle::operator=(const Vehicle &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        age=rhs.age;
        typeOfVehicle=rhs.typeOfVehicle;
        availability=rhs.availability;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Vehicle &obj){
    os<<" Name of transport: "<<obj.name<<" Year of release: "<<obj.age<<" Type of transport: "
    <<obj.typeOfVehicle<<" Is it available: "<<obj.availability;
    return os;


}