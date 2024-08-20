//WAP in c++ to print prime numbers
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin>>num;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            isPrime = false;
            break;
        }
    }
    if(num==1){
        cout <<"The number " <<num<<" is not prime." << endl;
    }else{
    if(isPrime==true){
        cout <<"The number " <<num<<" is prime." << endl;
    }else{
        cout <<"The number " <<num<<" is not prime." << endl;
    }
    }
return 0;
}