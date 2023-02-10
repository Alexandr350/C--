#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class Car{
	
protected:
	string company;
	string model;
public:
	Car(){}
	Car(string comp, string mod){
		company = comp;
		model = mod;
		
		cout << "Company =  " << company << endl;
		cout << "Model =  " << model << endl;
	}
};

class PassengerCar : public virtual Car{
	

public:
	PassengerCar(){}
	PassengerCar(string comp, string mod) : Car(){
		company = comp;
		model = mod;
		
		cout << "Company =  " << company << endl;
		cout << "Model =  " << model << endl;
	}
};
class Bus : public virtual  Car{
	
	
public:
	Bus(){}
	Bus(string comp, string mod) : Car(){
		company = comp;
		model = mod;
		
		cout << "Company =  " << company << endl;
		cout << "Model =  " << model << endl;
	}
};

class Minivan : public Bus, public PassengerCar{


public:
	
	Minivan(string comp, string mod) : Bus(), PassengerCar(){
		company = comp;
		model = mod;
		
		
		cout << "Company =  " << company << endl;
		cout << "Model =  " << model << endl;
	}
};

int main(){
	cout << "	Passenger Car"<< endl;
	cout << " "<< endl;
	PassengerCar passengerCar("Toyota", "Camry");
	cout << " "<< endl;
	cout << "	Bus"<< endl;
	cout << " "<< endl;
	Bus bus("PAZ", "3205");
	cout << " "<< endl;
	cout << "	Minivan"<< endl;
	cout << " "<< endl;
	Minivan minivan("Toyota", "Alphard");
	return 0;
}
