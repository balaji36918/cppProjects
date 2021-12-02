/* Matrikelnummer: 419142
Name:  Balaji Venkatasubramanian
Email:balajiv1818@gmail.com
Assignment: 2
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
	
	int x;
	string choice ;
	float value, con_val;
			
	for(;;) {
	//getting an input from user
	cout << "What do you want to convert? \n";
	cout << "Press 1 for FAHRENHEIT to CELSIUS \n";
	cout << "Press 2 for CELSIUS to FAHRENHEIT \n";
	cout << "Press 3 for MILES to KILOMETERS \n";
	cout << "Press 4 for KILOMETERS to MILES \n";
	cin >> x;
	cout << "How much is the value that you want to convert? \n";
	cin >> value ;
	
	switch(x){
		//F =>> C
		case 1:
			con_val = (value - 32) * (float(5) /float(9));
			cout << "The new value in Celsius is " << con_val ;	
			break;
		
		//C =>> F
		case 2:
			con_val = (value ) * (float(9) /float(5)) + 32;
			cout << "The new value in Fahrenheit is " << con_val ;	
			break;
		
		//	M =>> K
		case 3:
			con_val = value * float(1.609);
			cout << "The new value in Kilometers is " << con_val  ;	
			break;
			
		// K=>> M
		case 4:
			con_val = value / float(1.609);
			cout << "The new value in Miles is " << con_val  ;	
			break;
			
	}
	cout << "\n\nWould you like to continue the program(Y/N)? ";
	cin >> choice;
	if (choice == "Y"){
	}
	else {
		return 0;
	}
	}
}
