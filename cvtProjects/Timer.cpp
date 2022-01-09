/* Matrikelnummer: 419142
Name:  Balaji Venkatasubramanian
Email:venkatas@rhrk.uni-kl.de
Task 1
*/

//Header files
#include <iostream>
#include <stdlib.h> //for system()
#include <windows.h> //for Sleep() and Beep()

using namespace std;

//timer function
void timer(int s) {
	//TO RUN CONTINUOUSLY
	for(;; ) {
		
	//BREAK when s = 0
	if (s < 0)
        {
        break;
        }
	//display the counter firing down
	system("cls");
	cout << s-- << " seconds";
	Sleep(1000);
}
}

int main() {
	//variables
	int s;
	char input;
	
	//Interface
	cout << "Seconds: ";
	//Enter no of seconds
	cin >> s ;
	//user input to start the timer
	cout << "Press S to start the timer \n";
	cin >> input;
	if (input = 'S')
	{
		timer(s) ;
		cout << "\nProgram works ";
		for (int i = 100;  i < 500; i = i + 100){
		Beep(i,3000);
		
		}
}
}
