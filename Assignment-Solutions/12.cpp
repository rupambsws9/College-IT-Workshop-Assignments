// make a calculator using switch case

#include<iostream>
using namespace std;

int main(){
    int a , b , choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter your choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> choice;
    switch(choice){
        case 1:
            cout << "Addition: " << a + b << endl;
            break;
        case 2:
            cout << "Subtraction: " << a - b << endl;
            break;
        case 3:
            cout << "Multiplication: " << a * b << endl;
            break;
        case 4:
            if(b!=0){
                cout << "Division: " << a / b << endl;
            } else {
                cout << "Error" << endl;
                break;
            }
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}