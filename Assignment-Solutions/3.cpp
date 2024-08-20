//value swipe using 3rd variable in c++
#include<iostream>
using namespace std;

int main(){
    int a , b , c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    c = a;
    a = b;
    cout<<"After swapping first number = " << a << endl;
    b = c;
    cout <<"After swapping second number = " << b << endl;
    return 0;
}