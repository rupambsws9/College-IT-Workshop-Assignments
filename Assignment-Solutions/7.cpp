//check the user input year is leap year or not
#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if(year!=0){
    if(year%400==0){
        cout << "The year " << year << " is a leap year." <<endl;
    }else if(year%100==0){
        cout << "The year " << year << " is not a leap year." <<endl;
    }else if(year%4==0){
        cout << "The year " << year << " is a leap year." <<endl;
    }else{
        cout << "The year " << year << " is a invalid input." <<endl;
    }
    }else{
        cout << "This is a invalid input." <<endl;
    }
    return 0;
}