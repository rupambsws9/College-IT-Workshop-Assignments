//WAP in c++ to perform method overriding
#include<iostream>
using namespace std;

class base{
    public:
    void show(int a, int b){
        cout << a << " and " << b << endl;
    }
};

class derived: public base{
    public:
    void show(float a, float b){
        cout << a << " and " << b << endl;
    }
};

int main(){
    base b;
    derived d;
    b.show(1,2);
    d.show(3.14,3.5);
    return 0;
}