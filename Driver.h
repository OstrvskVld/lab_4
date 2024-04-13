
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
    Driver(string name, int age, double salary,string sal,double number,string placeOfResidence,Cars ownCar);
    Driver(double number,string placeOfResidence);
    Driver(People pepl,double number,string placeOfResidence);
    friend ostream &operator <<(ostream &os,const Driver &obj);
    Driver operator=(const Driver& rhs);
//    virtual void Salary() override;
    virtual ~Driver(){};
};


#endif //LABA_4_DRIVER_H
