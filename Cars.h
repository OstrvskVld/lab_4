
#ifndef LABA_4_CARS_H
#define LABA_4_CARS_H
#include "Vehicle.h"
#include "Engine.h"
#include <iostream>

using namespace std;

class Cars : public Vehicle {
private:
    string model;
    double price;
    double mileage;
    Engine engine1;
public:
    Cars();
//    Cars(string name): Vehicle(name){}; якщо я хочу працювати тільки з неймом
// приклад Cars(string name, int age) : Vehicle(name,age){};
    Cars(string name, string typeOfVehicle, int age, string availability,string model, double price, double mileage, Engine engine1);
    Cars(string name, string typeOfVehicle, int age, string availability, int del,string model, double price, double mileage);
    Cars(string name, string typeOfVehicle, int age, string availability, int del,string model);
    Cars(const Cars &other);
    friend ostream &operator <<(ostream &os,const Cars &obj);
    Cars operator=(const Cars& rhs);
    void GetVehicle() const override;
    void Delivery() const override;
    virtual ~Cars() override {};
};





#endif //LABA_4_CARS_H
