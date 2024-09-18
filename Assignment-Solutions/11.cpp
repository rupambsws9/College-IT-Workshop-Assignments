//
#include<iostream>
using namespace std;
int main(){
    int math,com,eng,hu,phy,avg=0;
    cout<<"Enter marks in Maths, Computer Science, English, Hindi, Physics: ";
    cin>>math>>com>>eng>>hu>>phy;
    avg=(math+com+eng+hu+phy)/5;
    avg/=10;
    switch(avg) {
        case 10: cout<<"E";
        case 9: cout<<"E";
                break;
        case 8: cout<<"A";
                break;
        case 7: cout<<"B";
                break;
        case 6: cout<<"C";
                break;
        case 5: cout<<"D";
                break;
        default: cout<<"Fail";
    }
    return 0;
}