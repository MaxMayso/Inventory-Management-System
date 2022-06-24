#ifndef Car_h
#define Car_h

#include <string>

using namespace std;

class Car {
   private:              
      //private object parameters
      string carMake = "none";
      double carPrice = 0.00;
      string carModel = "none";
      int carYear = 0;
      
   public:
  	  //inline functions that are accessors
      string GetMake() const { return carMake ; } 
      double GetPrice () const { return carPrice; }
      string GetModel() const { return carModel; }
      int GetYear() const { return carYear; }
      
      //default constructor
      Car();
  
  	   //overloaded constructor
  	   Car(string name, double price, string model, int year);
      
   
      //Mutators
      void SetMake(string make) {    //NOT inline, but short enough to include function definition immediately
         this-> carMake = make;
      }
      void SetPrice(double price) {  //NOT inline, but short enough to include function definition immediately
         this-> carPrice = price;
      }
      void SetYear(int year) {      //NOT inline, but short enough to include function definition immediately
         this-> carYear = year;
      }
      void SetModel(string model) { //NOT inline, but short enough to include function definition immediately
         this-> carModel = model;
      }
};


#endif
