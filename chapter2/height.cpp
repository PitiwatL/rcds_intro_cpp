// Import libraries
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


// Main function
int main(){

    // Declare variables
    string name; 
    double height;
    double age;

    // Assign values from kwyboard
    cout << "Please enter your name: " ;
    cin >> name;
    cout << "Please enter your height in cm" ;
    cin >> height;
    cout << "Please enter your age: ";
    cin >> age;

    // Print on screen
    cout << name << " is " << height << "cm tall and 0" << age << "years old." << endl;

    return 0;

}