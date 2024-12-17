//WAP in c++ to perform single inheritance
#include<iostream>
using namespace std;

class base{
    public:
        void show1(){
            cout << "Base class method" << endl;
        }
};

class derived: public base{
    public:
        void show2(){
            cout << "Derived class method" << endl;
        }
};

int main(){
    base b;
    derived d;
    b.show1();
    cout << endl;
    d.show1();
    d.show2();
    return 0;
}