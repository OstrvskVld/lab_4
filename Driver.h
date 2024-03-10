
#ifndef LABA_4_DRIVER_H
#define LABA_4_DRIVER_H
#include "People.h"
#include "Cars.h"

class Driver : public People{
private:
    double number;
    string placeOfResidence;
    Cars ownCar;
public:
    Driver();
    Driver(string name, int age, double salary,double number,string placeOfResidence,Cars ownCar);
    friend ostream &operator <<(ostream &os,const Driver &obj);
    Driver operator=(const Driver& rhs);
    ~Driver(){};
};


#endif //LABA_4_DRIVER_H
