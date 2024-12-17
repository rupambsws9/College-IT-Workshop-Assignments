//WAP in c++ to perform multiple inheritance
#include<iostream>
using namespace std;

class base{
    public:
        void show1(){
            cout << "Base class method" << endl;
        }
};

class derived{
    public:
        void show2(){
            cout << "Derived class method" << endl;
        }
};

class sub_derived: public base, public derived{
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
    d.show2();
    cout<<endl;
    d2.show1();
    d2.show2();
    d2.show3();
    return 0;
}