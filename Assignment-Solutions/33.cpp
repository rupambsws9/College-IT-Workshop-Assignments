//WAP in c++ to implement exception handeling using try and catch
#include <iostream>
using namespace std;

void divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero is not allowed!";
    }
    cout << "Result: " << (double)numerator / denominator << endl;
}

int main() {
    int num, den;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;
    try {
        divide(num, den);
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    cout << "Program continues after exception handling." << endl;
    return 0;
}
