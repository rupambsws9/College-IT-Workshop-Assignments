//WAP in c++ to perform hierchical inheritance
#include<iostream>
using namespace std;

class base{
    public:
    void show(){
        cout << "Base class method" << endl;
    }
};

class derived1: public base{

    public:
    void show(){
        cout << "Derived class method" << endl;
    }
};

class derived2: public base{
    void show(){
        cout << "Second derived class method" << endl;
    }
};

int main(){
    base b;
    derived d;
    b.show();
    cout << endl;
    d.show();
    d.show();
    return 0;
}