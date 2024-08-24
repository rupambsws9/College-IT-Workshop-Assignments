//check the user input type in c++ -9.cpp
#include <iostream>

using namespace std;

int main() {
    char input;
    cout << "Enter a Something: ";
    cin >> input;

    if (input >= '0' && input <= '9') {
        cout << "You entered a number." << endl;
    } else if (input >= 'a' && input <= 'z') {
        cout << "You entered a lowercase letter." << endl;
    } else if (input >= 'A' && input <= 'Z') {
        cout << "You entered an uppercase letter." << endl;
    } else if ((input >= ' ' && input <= '/') || 
            (input >= ':' && input <= '@') || 
            (input >= '[' && input <= '`') || 
            (input >= '{' && input <= '~')) {
        cout << "You entered a special character." << endl;
    } else {
        cout << "You entered an unknown character." << endl;
    }

    return 0;
}