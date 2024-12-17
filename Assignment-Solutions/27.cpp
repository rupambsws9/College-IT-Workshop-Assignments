//WAP in c++ to perform hybrid inheritance
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

class sub_derived: public base{
    public:
    void show3(){
        cout << "Second derived class method" << endl;
    }
};

class sub_sub_derived: public derived,public sub_derived{
    public:
    void show4(){
        cout << "Third derived class method" << endl;
    }
};

int main(){
    base b;
    derived d;
    sub_derived d2;
    sub_sub_derived d3;
    b.show1();
    cout<< endl;
    d.show1();
    d.show2();
    cout<<endl;
    d2.show1();
    d2.show3();
    cout<< endl;
    d3.show2();
    d3.show3();
    d3.show4();
    return 0;
}