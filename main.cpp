#include <iostream>
#include "Vehicle.h"
#include "Cars.h"
#include "People.h"
#include "Driver.h"
#include "Bike.h"
#include "interface.h"
#include "Functions.h"
#include "WrongType.h"
#include "WrongPassword.h"


using namespace std;

Cars car("","",0,"","","");
Vehicle vehicle("","",0,"","");
Bike bike(vehicle,"","",0);
People personal("",0,0,"");

int main() {
    cout << " Welcome to the vehicle salon! " << endl << endl;
    cout << " Who are you? " << endl << " Enter A if you are the Admin " << endl << " Enter U if you are the User ";
    Probels();
    char cont;
    cin >> cont;
    try {
        if (cont != 'A' && cont != 'U')
            throw WrongType();
        if (cont == 'A')
        {
            string password,login;
            cout << " Enter password! ";
            Probels();
            cin >> password;
            try {
                if (password != "vlad143") {
                    throw WrongPassword();
                }
                else{
                    while (true) {
                        Probels();
                        cout << "Choose function!" << endl;
                        cout << "A - Add VEHICLE" << endl;
                        cout << "B - Add PERSONAL" << endl;
                        cout << "C - Show information of PERSONAL" << endl;
                        cout << "D - Show information of VEHICLE" << endl;
                        cout << "E - Exit!" << endl;
                        Probels();

                        char choice;
                        cin >> choice;
                        try{
                            if (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'Q' && choice != 'D')
                                throw WrongType();
                                else{
                                while (true){
                                    switch (choice) {
                                        case 'A' : { //Add VEHICLE
                                            AddVehicle(vehicle);
                                            break;
                                        }
                                        case 'B' : {//Add Personal
                                            AddPersonal(personal);
                                            break;
                                        }
                                        case 'C' : {//Show information of personal
                                            ReadPersonal(personal);
                                            break;
                                        }
                                        case 'E' : {//Exit
                                            return 0;
                                        }

                                    }
                                }
                                }
                            }
                        catch (WrongPassword &A){
                            cerr << A.what();
                        }
                    }
                }

            }
            catch (WrongPassword &A){
                cerr << A.what();
            }
        }
    }
catch (WrongType &A){
    cerr << A.what();
}
}


