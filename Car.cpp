#include <iostream>
using namespace std;

#include "Car.h"

//Default constructor---------------------------------------------------------------------------------
Car::Car() {
  this-> carMake = "none";
  this-> carPrice = 0.00;
  this-> carModel = "none";
  this-> carYear = 0;
}

// overloaded constructor, doesn't need return type---------------------------------------------------
Car::Car(string make, double price, string model, int year) { 
   SetMake(make);
   SetPrice(price);
   SetModel(model);
   SetYear(year);

}
