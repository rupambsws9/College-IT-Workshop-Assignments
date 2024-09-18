//normal lcm without using gcd

#include<iostream>
using namespace std;
int main(){
    int a, b, lcm , max;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    max = (a > b)? a : b;
    while(1){
        if(max % a == 0 && max % b == 0){
            lcm = max;
            break;
        }
        max++;
    }
    cout << "The LCM of " << a << " and " << b << " is: " << lcm << endl;
    return 0;
}