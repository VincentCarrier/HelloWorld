#include <string> 
#include <iostream> 

using namespace std;


class Avion{
	string registration_number;

public:
	string model;
	// Encapsulation des données 
	string	get_registration_number(){ return registration_number;}
	void  set_registration_number(string registration_number_to_set){ registration_number = registration_number_to_set;}
    
};


void main(){
	Avion jet;
	jet.set_registration_number("ABC123");
	cout << jet.get_registration_number() << endl;

	return;
}