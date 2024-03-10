#ifndef LABA_4_ENGINE_H
#define LABA_4_ENGINE_H
#include <iostream>

using namespace std;

class Engine{
private:
    double engineCapacity,power;
public:
    Engine();
    Engine(double engineCapacity,double power);
    Engine(const Engine &other);
    Engine operator=(const Engine &rhs);
    friend ostream &operator<<(ostream &os, const Engine &obj);
    ~Engine(){};
};





#endif //LABA_4_ENGINE_H
