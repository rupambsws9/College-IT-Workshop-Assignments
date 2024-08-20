//WAP in c++ using base class and derived class
#include<iostream>
using namespace std;

class base{
    int x;
    public:
        void setx(int n){
            x=n;
        }
        void showx(){
            cout << x << endl;
        }
};
class derived:
public base{
    int y;
    public:
    void sety(int n){
        y=n;
    }
    void showy(){
        cout << y << endl;
    }
};
int main(){
    derived obj;
    obj.setx(10);
    obj.sety(20);
    obj.showx();
    obj.showy();
}