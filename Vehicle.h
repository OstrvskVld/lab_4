#ifndef LABA_4_VEHICLE_H
#define LABA_4_VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle{
private:
    string name;
    string typeOfVehicle;
    int age;
    string availability;
    int del;
public:
    Vehicle();
//    Vehicle(string name); якщо я хочу працювати тільки з неймом
//    Vehicle(string name, int age);
    Vehicle(string name, string typeOfVehicle, int age, string availability,int del);
    Vehicle(string name, string typeOfVehicle, int age, string availability);
    Vehicle(const Vehicle &other);
    Vehicle(Vehicle &&other);
    friend ostream &operator <<(ostream &os,const Vehicle &obj);
    Vehicle operator=(const Vehicle &rhs);
    virtual void GetVehicle() const;
    virtual void Delivery() const;
    virtual ~Vehicle(){};
};


#endif //LABA_4_VEHICLE_H
