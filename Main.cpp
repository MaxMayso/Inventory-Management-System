#include <iostream>
#include <string.h>
using namespace std;

#include "Car.h"

//Program that creates a list of cars --------
//
// Author : Max Maysonet-Ramirez
// Date : 06/24/2022

int main() {   
    string carMake;   // initializing all variables
    double carPrice;
    string carModel;
    int carYear, x, num;

    cout << "Car Inventory Creator" << endl;
    cout << "How many cars would you like to enter today?" << endl;

    cin >> num;                 //getting input for array
    Car arr[num];              //initializing array of Car objects


    //printing and taking input for item--------------------------------------------------
    for (int i = 0; i < num; ++i) 
    {    
        cout << endl << "Enter the car make:";
        getline(cin, carMake);                               //Using getline to get item full name and save
        cout << endl << "Enter car price: ";
        cin >> carPrice;                                   
        cout << endl << "Enter the model: ";
        getline(cin, carModel);
        cout << endl << "Enter car year: ";
        cin >> carYear;
        cout << endl << endl;

        arr[i] = Car(carMake, carPrice, carModel, carYear);     //Everytime Loops around, gets information and stores inside Car Object
        x += 1;

    }

    for (int n = 0; n < num; ++n)
    { cout << arr[n].GetYear() << endl << arr[n].GetMake() << arr[n].GetModel() << endl << endl; } 
        // Prints year, make and model of every car in the list created
   
   return 0;
}
