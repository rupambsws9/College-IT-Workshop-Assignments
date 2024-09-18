// normal gcd

#include <iostream>
using namespace std;

int main() {
    int a, b, c , d , gcd;
    cout << "Enter two numbers: ";
    cin >> a >> b;
     c = a;
     d = b;
    while(b!=0){
        gcd = b;
        b = a%b;
        a = gcd;
    }
    cout << "The GCD of " << c << " and " << d << " is: " << gcd << endl;
    return 0;
}