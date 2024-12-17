//WAP in c++ to perform method overloading
#include<iostream>
using namespace std;

class base{
    public:
    void show(int a, int b){
        cout << a << " and " << b << endl;
    }
    void show(double a, double b){
        cout << a << " and " << b << endl;
    }
};
int main(){
    base b;
    b.show(5, 10);
    b.show(5.5, 10.5);
    return 0;
}