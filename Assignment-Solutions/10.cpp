//make a calender where user can input the month number and get the month days in c++ 
#include<iostream>
using namespace std;

int main(){
    int month;
    cout << "Enter the month number: ";
    cin >>month;
    if(month==1 || month==3 || month==5 || month==7 || month==9 || month==10 || month==12){
        cout << "The month have 31 days." << endl;
    }else if(month==4 || month==6 || month==8 || month==11){
        cout << "The month have 30 days." << endl;
    }else if(month==2){
        cout << "The month have 28 days." << endl;
    }else{
        cout << "Invalid Input!" <<endl;
    }
    return 0;
}