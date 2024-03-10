
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
    Cars(const Cars &other);
    friend ostream &operator <<(ostream &os,const Cars &obj);
    Cars operator=(const Cars& rhs);
    ~Cars(){};
};





#endif //LABA_4_CARS_H
