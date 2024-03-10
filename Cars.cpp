

#include "Cars.h"
#include <iostream>

using namespace std;

Cars::Cars()
:Vehicle(),CarName(""),CarAge(0),typeOfVehicleBody(""),price(0),mileage(0),AvailabilityOfCar(""){}//default constructor
Cars::Cars( string CarName, int CarAge,string typeOfVehicleBody,double price, double mileage,  string AvailabilityOfCar)
: Vehicle(CarName,typeOfVehicleBody,CarAge,AvailabilityOfCar), CarName{CarName},CarAge{CarAge},
typeOfVehicleBody{typeOfVehicleBody},AvailabilityOfCar{AvailabilityOfCar}, price{price}, mileage{mileage}{};//constructor with parameters
Cars::Cars(const Cars &other)
:Vehicle(other), CarName(other.CarName), typeOfVehicleBody(other.typeOfVehicleBody), price(other.price), mileage(other.mileage),
AvailabilityOfCar(other.AvailabilityOfCar), CarAge(other.CarAge)
{};
Cars Cars::operator=(const Cars &rhs) {
    if (this == &rhs)
        return *this;
    else {
        Cars::operator=(rhs);
        CarName = rhs.CarName;
        CarAge = rhs.CarAge;
        typeOfVehicleBody = rhs.typeOfVehicleBody;
        price = rhs.price;
        mileage = rhs.mileage;
        AvailabilityOfCar = rhs.AvailabilityOfCar;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Cars &obj){
    os<<"Car`s name: "<<obj.CarName<<" Age: "<<obj.CarAge<<"  Type of vehicle body: "<<obj. typeOfVehicleBody
     <<" Price: "<<obj.price << " Mileage " <<obj.mileage << " Availability of car: " <<obj.AvailabilityOfCar;
    return os;
}