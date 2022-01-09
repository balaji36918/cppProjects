#include "House.h"
#include <iostream>
using namespace std;

//setters cant have constants as it cant be changed
//::dcope resolution operator 
void House::setNumStories(int numStories)
{
    //this -> since parameter name and datamember are same, this-> avoids overshadowing 
    this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}

void House::setColor(string color) {
    this->color = color;

}
//using keyword const is a considered as a good sw development practice 
//the code will still run even after the removal of the term const
//const is versatile - one s constant second s the function has access but the value cant be changed
int House::getNumStories() const
{
    return numStories;
}

int House::getNumWindows() const
{
    return numWindows;

}

string House::getColor() const
{
    return color;
}

void House::print() const
{
    cout << "The house is " << color << " and has "
        << numStories << " stories and "
        << numWindows << "windows." << endl;
}
