#include <iostream>
#include <time.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <stdexcept>

using namespace std;

int arr[1000], counter = 0;

//to check int or not...if alp, pgm terminate, random starts
bool isNumber(string s){
	for(int i = 0; i<s.length(); i++) 
		if(isdigit(s[i])== false)
			return false;
		
	return true ;		
	
}

//to check whether no..exist or not...linear search
bool alreadyExists(int *array, int array_size, int value) {
	for(int i=0; i< array_size; i++) 
		if(array[i] == value) 
			return true;//we found the same value, so true
	return false;	
	
}

//to allocate random values to left out arrays
void random(int cnt)
{
	//Checking all random generated values from repeating
	int z;
	for(int i=cnt; i<1000; i++) {
		arr[i] =rand();
		z = rand();
	    if(alreadyExists(arr, i,z))
			{
			
			cout <<"Random value just repeated once, removal process started";
			i--;
		    }
	    
		
		else
		{
			arr[i] = z;
		}
			
		
	}
}

int main() {
    string str;
	cout << "Please enter the value/Press Q to quit user input" ;
	
	for(counter; counter<1000; counter++) 
	{
		cin >> str ;
		//calls to check int or not
		if (isNumber(str))
		{
			int n = stoi(str);
			//calls to check existing no.
			if(alreadyExists(arr, counter,n))
			{
			
			cout <<"The integer u entered is already present. Pls give different input";
			counter--;
		    }
	    
		//=>>>>
		else
		{
			arr[counter] = n;
		}
		}
		//random
		else
		{
		    random(counter);
		    break; //to avoid starting from 10
		}
		
		
	}
	for(int i = 0; i<1000; i++)
	{
		cout <<arr[i] << "\t" << "\n";
	 } 
return 0;	 
}
