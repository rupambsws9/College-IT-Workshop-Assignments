//WAP in c++ to illustrate call by value and call by reference
#include <iostream>
using namespace std;

void callByValue(int a) {
    a = a + 10;
    cout << "Inside callByValue, modified value: " << a << endl;
}

void callByReference(int &b) {
    b = b + 20;
    cout << "Inside callByReference, modified value: " << b << endl;
}

int main() {
    int x = 5, y = 10;
    cout << "Before callByValue, x = " << x << endl;
    callByValue(x);
    cout << "After callByValue, x = " << x << endl;
    cout << "\nBefore callByReference, y = " << y << endl;
    callByReference(y);
    cout << "After callByReference, y = " << y << endl;
    return 0;
}