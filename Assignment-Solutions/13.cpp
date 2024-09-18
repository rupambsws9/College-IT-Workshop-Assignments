// make a calculator using switch case

#include<iostream>
using namespace std;

int main(){
    int a , b;
    char choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter your choice: \n+ Addition\n- Subtraction\n* Multiplication\n/ Division\n";
    cin >> choice;
    switch(choice){
        case '+':
            cout << "Addition: " << a + b << endl;
            break;
        case '-':
            cout << "Subtraction: " << a - b << endl;
            break;
        case '*':
            cout << "Multiplication: " << a * b << endl;
            break;
        case '/':
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