// carrots.cpp -- processing program
// uses and displays a variable

#include <iostream>
using namespace std;

int main () {

    int carrots; //declare an integer variable

    carrots = 25; //assign a value to  the variable
    cout << "I have ";
    cout << carrots;
    cout << " carrots. ";
    cout << endl;
    carrots = carrots - 1;
    cout <<"Crunch ,crunch. Now I have " << carrots << " carrots." << endl; 

}