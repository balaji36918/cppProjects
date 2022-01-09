//Task 1 using classes and objects
/* Matrikelnummer: 419142
Name:  Balaji Venkatasubramanian
Email: venkatas@rhrk.uni-kl.de
Task 1
*/
#include <iostream>

using namespace std;

//create a class
class Converter{
	public:
		//creating variables
		float value;
		float con_val;
		
		//writing the function to convert FTO C
		float f2c() {
			cout << "Fahrenheit to Celsius converter: \n";
			cout << "Enter the value of Fahrenheit: \n";
			//get data 
			cin >> value;
			con_val = (value - 32) * (float(5) /float(9));
			return con_val;			
		}
		
		//writing the function to convert C TO F
		float c2f() {
			cout << "Celsius to Fahrenheit converter: \n";	
			cout << "Enter the value of Celsius: \n";
			//get data
			cin >> value;
			con_val = (value) * (float(9) /float(5)) + 32;
			return con_val;
		}
		
		//writing the function to convert M TO K
		float m2k() {
			cout << "Miles to Kilometer converter: \n";
			cout << "Enter the value in Miles: \n";
			//get data
			cin >> value;
			con_val = value * float(1.609);
			return con_val;
		}
		
		//writing the function to convert K TO M
		float k2m() {
			cout << "Kilometers to Miles converter: \n ";
			cout << "Enter the value in Kilometers: \n";
			//get data
			cin >> value;
			con_val = value / float(1.609);
			return con_val;
		}
		
		//	EUROS =>> USDOLLARS
		float e2u() {
			cout << "Euros to USD converter: \n";
			cout << "Enter the value in Euros: \n";
			//1 EURO = 1,18 USDOLLAR
			//get data
			cin >> value;
			con_val = value * 1.18;
			return con_val ;
		}
		
		//	USD =>> Euros
		float u2e() {
			cout << "USD to Euros converter: \n";
			cout << "Enter the value in USD: \n";
			//1 EURO = 1,18 USDOLLAR
			//get data
			cin >> value;
			con_val = value / 1.18;
			return con_val ;
		}
		
		
};

int main() {
	
	//variable
	char choice, input;
	
	for(;;) {
	
	//User Interface
	cout << "What do you want to convert? \n";
	cout << "Press C for FAHRENHEIT to CELSIUS \n";
	cout << "Press F for CELSIUS to FAHRENHEIT \n";
	cout << "Press K for MILES to KILOMETERS \n";
	cout << "Press M for KILOMETERS to MILES \n";
	cout << "Press U for EUROS to USDOLLARS \n";
	cout << "Press E for USDOLLARS to EUROS \n";
	cout << "Enter all values in Capital letters \n" ;
	
	
	//getting the choice from customer
	cin >> choice;
		
	//creating a object for converter class
	Converter converter1, converter2, converter3, converter4, converter5, converter6;
	
	//main case
	switch(choice) {
		//F => C
		case 'C':
			//converter1.value= value;
			cout << "The value in Celsius is  " << converter1.f2c() << endl;
			break;
			
		//C => F
		case 'F':	
			cout << "The value in Fahrenheit is  " << converter2.c2f() << endl;
			break;
		
		//M => K	
		case 'K':
			cout << "The value in kilometers is  " << converter3.m2k() << endl;
			break;
			
		//K => M	
		case 'M':
			cout << "The value in miles is  " << converter4.k2m() << endl;
			break;
		
		//Euros => USD 	
		case 'U':
			cout << "The value in USD is  " << converter5.e2u() << endl;
			break;
		
		//USD => Euros	
		case 'E':
			cout << "The value in Euros is  " << converter6.u2e() << endl;
			break;	
		
		
	}
	
	//TO RUN CONTINUOUSLY
	cout << "Press Q to quit the program  \n";
	cout << "Press any other key to use the converter again \n";
	cin >> input;
	if (input == 'Q'){
		return 0;
	}
	else {
		
	}
}
	
	
	
	
}
