// import libraries
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;

    cout << "please enter x number: ";
    cin >> x; 
    cout << "please enter y number: ";
    cin >> y; 

    // print square and square root
    cout << "x squared: " << pow(x,2) << endl;
    cout << "sqrt(x): " << sqrt(x) << endl;

    cout << "x*y: " << x*y << endl;
    cout << "x/y: " << x/y << endl;
    cout << "sin(x): " << sin(x) << endl;
    cout << "cos(y): " << cos(x) << endl;

    return 0;
}