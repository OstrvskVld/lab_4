
#ifndef LABA_4_BIKE_H
#define LABA_4_BIKE_H
#include "Vehicle.h"


class Bike : public Vehicle{
private:
    string color;
    int cost;
public:
    Bike();
    Bike(string name,string typeOfVehicle,int age,string availability,string color,int cost);
    Bike(const Bike &other);
    friend ostream &operator <<(ostream &os,const Bike &obj);
    Bike operator=(const Bike& rhs);
    virtual void GetVehicle () const override;
    virtual ~Bike() override {};
};


#endif //LABA_4_BIKE_H
