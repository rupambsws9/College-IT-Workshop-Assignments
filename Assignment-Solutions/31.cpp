//WAP in c++ to implement this pointer

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
public:
    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }
    Rectangle& setLength(int length) {
        this->length = length;
        return *this;
    }
    Rectangle& setWidth(int width) {
        this->width = width;
        return *this;
    }
    int area() const {
        return this->length * this->width;
    }
    void display() const {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};
int main() {
    Rectangle rect(10, 5);
    cout << "Initial dimensions:" << endl;
    rect.display();
    cout << "\nChanging dimensions using 'this' pointer..." << endl;
    rect.setLength(15).setWidth(7);
    rect.display();
    cout << "\nArea of rectangle: " << rect.area() << endl;
    return 0;
}
