//WAP in c++ to implement constructor and destructor
#include <iostream>
using namespace std;

class Sample {
private:
    int value;
public:
    Sample(int v) {
        value = v;
        cout << "Constructor called. Value initialized to " << value << endl;
    }
    void display() {
        cout << "Value is: " << value << endl;
    }
    ~Sample() {
        cout << "Destructor called. Value was " << value << endl;
    }
};
int main() {
    cout << "Creating object obj1..." << endl;
    Sample obj1(10);
    obj1.display();
    cout << "\nCreating object obj2..." << endl;
    Sample obj2(20);
    obj2.display();
    cout << "\nEnd of program. Destructors will be called automatically." << endl;
    return 0;
}