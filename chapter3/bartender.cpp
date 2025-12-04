#include <iostream>
#include <string>
using namespace std;

int main(){
    // we need to declare our variables here
    int age;
    string name;

    // assign values
    cout << "welcome to the pub." << endl;
    cout << "what's your age." << endl;

    // cin is used as character input in cpp
    // cout is like print
    cin >> age;

    cout << "what's your name?" << endl;
    cin >> name;

    // wait we can also plus string like this
    // additionally, && means AND || means OR
    cout << "Hi!" + name << endl;
    if (age > 18){
        cout << "Have a pint!" << endl;
    } else if(age == 18){
        cout << "Show me your ID and then have a pint!" << endl;
    } else {
        cout << "I'm calling the police" << endl;
    }

    cout << "Goodbye!" << endl;
    return 0;
}