#ifndef LABA_4_ENGINE_H
#define LABA_4_ENGINE_H
#include <iostream>

using namespace std;

class Engine{
private:
    string engineCapacity,power;
public:
    Engine();
    Engine(string engineCapacity,string power);
    Engine(const Engine &other);
    Engine operator=(const Engine &rhs);
    friend ostream &operator<<(ostream &os, const Engine &obj);
    ~Engine(){};
};





#endif //LABA_4_ENGINE_H
