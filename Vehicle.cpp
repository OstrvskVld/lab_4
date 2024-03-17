
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle()
: Vehicle("","",0,"",0){}
Vehicle::Vehicle(string name, string typeOfVehicle, int age, string availability)
        : name(name), typeOfVehicle(typeOfVehicle), age(age), availability(availability) {}
Vehicle::Vehicle(string name, string typeOfVehicle, int age, string availability,int del)
: name(name), typeOfVehicle(typeOfVehicle), age(age), availability(availability), del(del) {}
Vehicle::Vehicle(const Vehicle &other) {
name=other.name;
typeOfVehicle=other.typeOfVehicle;
age=other.age;
availability=other.availability;
del=other.del;
}
Vehicle::Vehicle(Vehicle &&other)
:name(other.name), typeOfVehicle(other.typeOfVehicle),age(other.age),availability(other.availability),del(other.del){
other.name= "";
other.typeOfVehicle= "";
other.age = 0;
other.availability = "";
other.del = 0;
}

Vehicle Vehicle::operator=(const Vehicle &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        age=rhs.age;
        typeOfVehicle=rhs.typeOfVehicle;
        availability=rhs.availability;
        del=rhs.del;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Vehicle &obj){
    os<<" Name of transport: "<<obj.name<<" Year of release: "<<obj.age<<" Type of transport: "
    <<obj.typeOfVehicle<<" Is it available: "<<obj.availability;
    return os;
}

void Vehicle::Delivery() const {
    switch (del) {
        case 1:
            cout << " Transport can be delivered ";
            break;
        case 2:
            cout << " Transport can not be delivered ";
            break;
        
    }
}

void Vehicle::GetVehicle() const {
    cout<<" Name of transport: "<<name<<" Year of release: "<<age<<" Type of transport: "
      <<typeOfVehicle<<" Is it available: "<<availability << " Vehicle " << endl;
}


