//pre processor code
#ifndef HOUSE_H
#define HOUSE_H

//if there are multiple classes, it might lead to conflicts

#include <string>
using namespace std;

class House {
    public:
        //setters cant have constants as it cant be changed
        void setNumStories(int numStories);
        

        void setNumWindows(int numWindows);
        

        void setColor(string color);
        //using keyword const is a considered as a good sw development practice 
        //the code will still run even after the removal of the term const
        //const is versatile - one s constant second s the function has access but the value cant be changed
        int getNumStories() const ;

        int getNumWindows() const ;

        string getColor() const ;

        void print() const;

    private:
        int numStories;
        int numWindows;
        string color;

 }; //end of the class house

#endif

