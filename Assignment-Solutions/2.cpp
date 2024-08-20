//WAP in C++ to print factorial of any variable. (Input to be given by the user)
#include<iostream>
using namespace std;

int main(){
    int num, fact;
    cout << "Enter the number that you want to find factorial: ";
    cin >> num;
    for(int i=num; i>0; i--){
        fact *= i;
    }
    cout << "The factorial of " << num << " is: " << fact << endl;
    return 0;
}