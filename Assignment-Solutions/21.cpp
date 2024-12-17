//WAP in c++ to check whether a number is amstrong or not
#include<iostream>
using namespace std;
int main(){  
    int num,originalNum,remainder,sum;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    sum = 0;
    while(num!=0){
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }
    if(originalNum == sum){
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }
    return 0;
}