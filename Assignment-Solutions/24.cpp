//WAP in c++ to perform multilevel inheritance
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

class sub_derived: public derived{
    public:
    void show3(){
            cout << "Second derived class method" << endl;
        }
};

int main(){
    base b;
    derived d;
    sub_derived d2;
    b.show1();
    cout<< endl;
    d.show1();
    d.show2();
    cout<< endl;
    d2.show1();
    d2.show2();
    d2.show3();
    return 0;
}