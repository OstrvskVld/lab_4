#include <iostream>
#include "Vehicle.h"
#include "Cars.h"
#include "People.h"
#include "Driver.h"

using namespace std;


int main() {

    Vehicle General("Daewoo", "Car", 2003, "Yes");
    cout << General << endl;
    Engine lanosPower(8.0, 666);
    Cars class_car("Daewoo", "Car", 2003, "Yes", "Lanos", 2900, 187000, lanosPower);
    cout << class_car << endl;
    People prof("Lisa", 18, 3400);
    cout << prof;
    Driver fastfur ("Lisa",18,3400,26,"Zaporizhzhia",class_car);
    cout << fastfur;
}