// WAP in c++ to print fibonacci series
#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, i,range;
    n1=0;
    n2=1;
    cout << "Enter the number of terms: ";
    cin >> range;
    cout << "Fibonacci Series: "<<endl;
    cout << n1 << " " << n2 << " ";
    for (i = 2; i < range; ++i) {
        n3=n1+n2;
        cout << n3 << " ";
        n1=n2;
        n2=n3;
    }
    cout << endl;
    return 0;
}