
#ifndef LABA_4_CARS_H
#define LABA_4_CARS_H
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Cars : public Vehicle {
private:

    string CarName;
    string typeOfVehicleBody;
    double price;
    double mileage;
    string AvailabilityOfCar;
    int CarAge;
public:
    Cars();
    Cars(string CarName, int CarAge, string typeOfVehicleBody, double price, double mileage, string AvailabilityOfCar);
    Cars(const Cars &other);
    Cars(Cars &&other);
    friend ostream &operator <<(ostream &os,const Cars &obj);
    Cars operator=(const Cars& rhs);
    ~Cars(){};
};





#endif //LABA_4_CARS_H
