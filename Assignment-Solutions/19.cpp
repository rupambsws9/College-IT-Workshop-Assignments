// WAP in c++ to find the factorial of any number
#include<iostream>
using namespace std;
int main(){
    int num, fact=1;
    cout << "Enter the number: ";
    cin >> num;
    for(int i=num;i>=1;i--){
        fact*=i;
    }
    cout << "Factorial of " << num << " is: " << fact << endl;
    return 0;
}