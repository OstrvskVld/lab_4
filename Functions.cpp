#include "Vehicle.h"
#include "Functions.h"
#include <iostream>
#include "memory"
#include <fstream>
#include "Cars.h"
#include "Engine.h"
#include "Bike.h"
#include "WrongType.h"
#include "AnotherVariant.h"
#include "People.h"
#include "Driver.h"
#include "vector"




using namespace std;

void Probels(){
    cout<<endl<<"--------------------------"<<endl;
};

void AddVehicle(Vehicle &vehicle) {
    cout << " You want to add new vehicle: " << endl;
    cout << " What is the name of the transport? " << endl;
    shared_ptr<string> nam{new string{""}};
    cin >> *nam;
    cout << " Is it available? " << endl;
    shared_ptr<string> aval{new string{""}};
    cin >> *aval;
    cout << " Is it possible to bring from abroad? " << endl;
    shared_ptr<string> deliv{new string{""}};
    cin >> *deliv;
    cout << " Enter age of vehicle: " << endl;
    shared_ptr<double> age{new double{0}};
    cin >> *age;
    cout << " Type of vehicle: " << endl;
    shared_ptr<string> typeOfVehicle{new string{""}};
    cin >> *typeOfVehicle;
    if (*aval == "No" && *deliv == "No")
       throw AnotherVariant();
    Vehicle vehic(*nam, *typeOfVehicle, *age, *aval, *deliv);
    ofstream foutVe(R"(C:\Oop143\Laba_4\Vehicle.txt)",
                    ios_base::app);
    foutVe << vehic << "\t" << endl;
    foutVe.close();
    Probels();
}
//    if (*aval == "No" && *deliv == "No")
//        throw AnotherVariant();
//
//    string choic;
//    cout << " Enter type of vehicle " << endl;
//    try {
//        cin >> choic;
//        if (choic != "Car" && choic != "Bike")
//            throw AnotherVariant();
//        if (choic == "Car") {
//            shared_ptr<int> ag{new int{0}};
//            cout << " Enter age of car: " << endl;
//            cin >> *ag;
//            shared_ptr<string> mod{new string{""}};
//            cout << " Enter model of car: " << endl;
//            cin >> *mod;
//            shared_ptr<double> price{new double{0}};
//            cout << " Enter price of car: " << endl;
//            cin >> *price;
//            shared_ptr<double> milleage{new double{0}};
//            cout << " Enter milleage of car: " << endl;
//            cin >> *milleage;
//            shared_ptr<string> engine{new string{""}};
//            cout << " Enter engine capacity of car: " << endl;
//            cin >> *engine;
//            shared_ptr<string> power{new string{""}};
//            cout << " Enter power of car: " << endl;
//            cin >> *power;
//            Cars Car(vehic, choic, *ag, *mod, *price, *milleage, {*engine, *power});
//            ofstream foutCar("C:\\Oop143\\Laba_4\\Car.txt",
//                             ios_base::app);
//            foutCar << Car << "\t" << endl;
//            foutCar.close();
//            Probels();
//        }
//        if (choic == "Bike") {
//            shared_ptr<string> col{new string{""}};
//            cout << " Color of bike: " << endl;
//            cin >> *col;
//            shared_ptr<double> cost{new double{0}};
//            cout << " Enter cost of bike: " << endl;
//            cin >> *cost;
//            Bike bik(vehic, choic, *col, *cost);
//            ofstream foutBike("C:\\Oop143\\Laba_4\\Bike.txt",
//                              ios_base::app);
//            foutBike << bik << "\t" << endl;
//            foutBike.close();
//            Probels();
//        }
//    }
//    catch (AnotherVariant &A) {
//        cerr << A.what();
//    }
//
//    }
//    cin >> choic;
//    if (choic != "Car" && choic != "Bike")
//        throw AnotherVariant();
//        if (choic == "Car") {
//                unique_ptr<int> ag{new int{0}};
//                cout << " Enter age of car: " << endl;
//                cin >> *ag;
//                unique_ptr<string> mod{new string{""}};
//                cout << " Enter model of car: " << endl;
//                cin >> *mod;
//                unique_ptr<double> price{new double{0}};
//                cout << " Enter price of car: " << endl;
//                cin >> *price;
//                unique_ptr<double> milleage{new double{0}};
//                cout << " Enter milleage of car: " << endl;
//                cin >> *milleage;
//                unique_ptr<string> engine{new string{""}};
//                cout << " Enter engine capacity of car: " << endl;
//                cin >> *engine;
//                unique_ptr<string> power{new string{""}};
//                cout << " Enter power of car: " << endl;
//                cin >> *power;
//                Cars Car(vehic, choic, *ag, *mod, *price, *milleage, {*engine, *power});
//                ofstream foutCar("C:\\Oop143\\Laba_4\\Car.txt",
//                                 ios_base::app);
//                foutCar << Car << "\t" << endl;
//                foutCar.close();
//                Probels();
//            }
//        if (choic == "Bike") {
//            unique_ptr<string> col{new string{""}};
//            cout << " Color of bike: " << endl;
//            cin >> *col;
//            unique_ptr<double> cost{new double{0}};
//            cout << " Enter cost of bike: " << endl;
//            cin >> *cost;
//            Bike bik(vehic, choic, *col, *cost);
//            ofstream foutBike("C:\\Oop143\\Laba_4\\Bike.txt",
//                              ios_base::app);
//            foutBike << bik << "\t" << endl;
//            foutBike.close();
//            Probels();
//        }
//    }
//    if (choic == "Car") {
//        while (true) {
//            shared_ptr<int> ag{new int{0}};
//            cout << " Enter age of car: " << endl;
//            cin >> *ag;
//            shared_ptr<string> mod{new string{""}};
//            cout << " Enter model of car: " << endl;
//            cin >> *mod;
//            shared_ptr<double> price{new double{0}};
//            cout << " Enter price of car: " << endl;
//            cin >> *price;
//            shared_ptr<double> milleage{new double{0}};
//            cout << " Enter milleage of car: " << endl;
//            cin >> *milleage;
//            shared_ptr<string> engine{new string{""}};
//            cout << " Enter engine capacity of car: " << endl;
//            cin >> *engine;
//            shared_ptr<string> power{new string{""}};
//            cout << " Enter power of car: " << endl;
//            cin >> *power;
//            Cars Car(vehic, choic, *ag, *mod, *price, *milleage, {*engine, *power});
//            ofstream foutCar(R"("C:\Oop143\Laba_4\Car.txt")",
//                             ios_base::app);
//            foutCar << Car << "\t" << endl;
//            foutCar.close();
//            Probels();
//        }
//    } else if (choic == "Bike") {
//        shared_ptr<string> col{new string{""}};
//        cout << " Color of bike: " << endl;
//        cin >> *col;
//        shared_ptr<double> cost{new double{0}};
//        cout << " Enter cost of bike: " << endl;
//        cin >> *cost;
//        Bike bik(vehic, choic, *col, *cost);
//        ofstream foutBike(R"(C:\Oop143\Laba_4\Bike.txt)",
//                          ios_base::app);
//        foutBike << bik << "\t" << endl;
//        foutBike.close();
//    } else {
//        throw std::runtime_error("Error: try again");
//    }
//}

void AddPersonal(People &people){
    cout << " You want to add new person: " << endl;
    cout << " What is the employee`s name? " << endl;
    shared_ptr <string> nam{new string {""}};
    cin >> *nam;
    cout << " Age: " << endl;
    shared_ptr <int> ag{new int {0}};
    cin >> *ag;
    cout << " Amount of salary: " << endl;
    shared_ptr <double> sal{new double {0}};
    cin >> *sal;
    cout << " Salary is/is not received? " << endl;
    shared_ptr <string> ifsal{new string {""}};
    cin >> *ifsal;
    People pepl(*nam,*ag,*sal,*ifsal);
    ofstream foutPeople(R"(C:\Oop143\Laba_4\People.txt)",
                                ios_base::app);
    foutPeople << pepl << "\t" << endl;
    foutPeople.close();
    Probels();


//    string inf;
//    cout << " If you want to know more information, press 'Q'. If not, press 'E' " << endl;
//    cin >> inf;
//    if (inf != "Q" && inf != "E")
//        throw AnotherVariant();
//    if (inf == "Q"){
//        cout << " Detailed information: " << endl;
//        cout << " Phone number: " << endl;
//        shared_ptr <double> phone{new double {0}};
//        cin >> *phone;
//        cout << " Place of residence: " << endl;
//        shared_ptr <string> residence {new string {""}};
//        cin >> *residence;
//        Driver pers(pepl,*phone,*residence);
//        ofstream foutpers(R"(C:\Oop143\Laba_4\People.txt)",
//                            ios_base::app);
//        foutpers << pers << "\t" << endl;
//        foutpers.close();
//        Probels();
//    } else if (inf == "E")
//        //закінчити...
//        throw runtime_error("Exiting from choice");

}
void ReadPersonal(People &people){
    ifstream finE(R"(C:\Oop143\Laba_4\People.txt)");
    if (!finE.is_open()) {
        cerr << "Error opening file: " << endl;
    }

    shared_ptr <string> nam{new string {""}};
    shared_ptr <int> ag{new int {0}};
    shared_ptr <double> sal{new double {0}};
    shared_ptr <string> ifsal{new string {""}};
//    shared_ptr <double> phone{new double {0}};
//    shared_ptr <string> residence {new string {""}};
    while (finE >> *nam >> *ag >> *sal >> *ifsal) { //*phone >> *residence){
        cout << *nam << " " << *ag << "\t" << *sal << "\t" << *ifsal << "\t"
             << endl;//*phone << "\t" << *residence << endl;
    }
    finE.close();
}

void ReadVehicle(Vehicle &vehicle){
    ifstream finE(R"(C:\Oop143\Laba_4\Vehicle.txt)");
    if (!finE.is_open()) {
        cerr << "Error opening file: " << endl;
    }
    shared_ptr<string> nam{new string{""}};
    shared_ptr<string> aval{new string{""}};
    shared_ptr<string> deliv{new string{""}};
    shared_ptr<double> age{new double{0.0}};
    shared_ptr<string> typeOfVehicle{new string{""}};
    while(finE >> *nam >> *deliv >> *aval >> *age >> *typeOfVehicle){
        cout << *nam << "\t" << *deliv << "\t" << *aval << "\t" << *age << "\t" << *typeOfVehicle << "\t" << endl;
    }
    finE.close();
}

void BuyACar(Vehicle &vehicle) {
    cout << " You want to buy a vehicle: " << endl;
    cout << " Choose which vehicle you want to buy: " << endl;
    ifstream finE(R"(C:\Oop143\Laba_4\Vehicle.txt)");
    if (!finE.is_open())
        cerr << "Error opening file: " << endl;


        shared_ptr<string> nazv{new string{""}};
        cin >> *nazv;
        shared_ptr<string> nam{new string{""}};
        shared_ptr<string> aval{new string{""}};
        shared_ptr<string> deliv{new string{""}};
        shared_ptr<double> age{new double{0}};
        shared_ptr<string> typeOfVehicle{new string{""}};
        while (finE >> *nam >> *aval >> *deliv >> *age >> *typeOfVehicle) {
            cout << *nam << " " << *aval << " " << *deliv << " " << *age << " " << *typeOfVehicle << " " << endl;

            if (*nam == *nazv) {
                Vehicle vehic(*nam, *typeOfVehicle, *age, *aval, *deliv);
                ofstream foutCar(R"(C:\Oop143\Laba_4\Purchase.txt)",
                                 ios_base::app);
                foutCar << vehic << "\t" << endl;
            }
        }
    finE.close();
}
//                ifstream finCar(R"("C:\Oop143\Laba_4\Purchase.txt)");
//
//                shared_ptr<string> nam{new string{""}};
//                shared_ptr<string> aval{new string{""}};
//                shared_ptr<string> deliv{new string{""}};
//                shared_ptr<double> age{new double{0.0}};
//                shared_ptr<string> typeOfVehicle{new string{""}};
//                while(finCar >> *nam >> *deliv >> *aval >> *age >> *typeOfVehicle){
//                    cout << *nam << "\t" << *deliv << "\t" << *aval << "\t" << *age << "\t" << *typeOfVehicle << "\t" << endl;
//                }
//                finE.close();
                //                    foutCar.close();
                //                    vector<int> numbers;
                //                    ifstream finCar
                //                            (R"(C:\Oop143\Laba_4\Purchase.txt)");
                //                    while (finCar  >> *nam >> *aval >> *deliv >> *age >> *typeOfVehicle)
                //                        cout  << *nam << " " << *aval << " " << *deliv << " " << *age << " " << *typeOfVehicle << " " << endl;
                //                    if (!finCar.is_open())
                //                        cerr << "Error.";
//            }
//            finE.close();
//                    else {
////                        while (finCar >> *nam >> *aval >> *age >> *aval >> *deliv) {
////                            numbers.push_back(*nazv);
////                        }
////                        Vehicle vehic(*nam, *typeOfVehicle, *age, *aval, *deliv);
////                        ofstream foutCar(R"("C:\Oop143\Laba_4\Purchase.txt)");
////                        for (int i = 0; i < numbers.size(); ++i) {
////                            if (numbers[i] == *nazv) {
////                                foutCar << numbers[i] << endl;
////                            } else {
////                                foutCar << vehic << "\t" << endl;
////                                ofstream foutPur(R"(C:\Oop143\Laba_4\Purchase.txt)", ios_base::app);
////                                foutPur << numbers[i] << "\t" << endl;
////                            }
////                            foutCar << vehic << "\t" << endl;
////                            foutCar.close();
//                        }
//                        foutCar.close();
//        }


//}


            //finE.close();













