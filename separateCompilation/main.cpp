#include <iostream>
#include <string>
#include "House.h"

using namespace std;

void printHouseData(House house);
void print();

int main() {
    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    /*printHouseData(myHouse);
    printHouseData(yourHouse);*/
    myHouse.print();
    yourHouse.print();
    return 0;
}

void printHouseData(const House& house) {

    cout << "The house is " << house.getColor() << " and has "
        << house.getNumStories() << " stories and "
        << house.getNumWindows() << "windows." << endl;
}
