#include <iostream>
#include "Vehicle.h"
#include "Cars.h"
#include "People.h"
#include "Driver.h"
#include "Bike.h"
#include "interface.h"

using namespace std;



int main() {
    Interface1 interface;
    Vehicle General("Daewoo", "Car", 2003, "Yes");
    cout << General << endl;
    Engine lanosPower("8.0", "666");
    Engine bmw("6.6","634");
    Cars class_car("Daewoo", "Car", 2003, "Yes", "Lanos", 2900, 187000, lanosPower);
    cout << class_car << endl;
    People prof("Lisa", 18, 3400,1);
    cout << prof << endl;
    prof.Salary();
    Driver fastfur ("Anton",18,3400,2,26,"Zaporizhzhia",class_car);
    cout << fastfur << endl;
    Vehicle AutoMove = move(General);
    cout << General << endl << AutoMove << endl;
    Vehicle VehicleNew{General};
    cout <<  General << endl << endl << endl;
    Vehicle *transbike = new Bike("Atlantic","Bike",2022,"Yes","Red",1000);
    Vehicle *transcar = new Cars("BMW","Car",2005,"No","525",11000,231000,bmw);
    Vehicle *transdel = new Cars("Mercedes","Car",2023,"No",1,"E-class");
    transbike->GetVehicle();
    transcar->GetVehicle();
    transdel->Delivery();

    Bike bike("Corso","Bike",2019,"No","Black",1200);
    Vehicle vehicle("Revox","Bike",2021,"Yes",2);
    Vehicle &vehicle1 = bike;
    vehicle1.GetVehicle();
    vehicle.GetVehicle();
    interface.A1();
    cout<<AutoMove;
    interface.A2();
    transcar->GetVehicle();
    interface.A3();
    cout<<prof;
    interface.A4();
    cout<<fastfur;
    interface.A5();
    transbike->GetVehicle();

    delete transbike;
    delete transcar;
    delete transdel;



}


