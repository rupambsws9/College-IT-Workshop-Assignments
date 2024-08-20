/* WAP in c++ where you have take user input for student name,roll no ,marks of three subjects and make avg of
the subjects and show them ,write this program using base class and derived class */
#include <iostream>
#include <limits> // For std::numeric_limits
using namespace std;

// Base class
class Student {
public:
    string name;
    int rollNo;

public:
    void getStudentInfo() {
        cout << "Enter student name: ";
        getline(cin, name); // Use getline to capture the entire name, including spaces

        cout << "Enter roll number: ";
        cin >> rollNo;
        
        // Clear the input buffer before the next input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void displayStudentInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class
class Marks : public Student {
protected:
    float subjects[3], average;

public:
    void getMarks() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for Subject " << i + 1 << ": ";
            cin >> subjects[i];
        }
    }

    void calculateAverage() {
        average = (subjects[0] + subjects[1] + subjects[2]) / 3;
    }

    void displayAverage() {
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    Marks student;
    student.getStudentInfo();
    student.getMarks();
    student.calculateAverage();
    cout << "\nStudent details and Avg Marks" << endl;
    student.displayStudentInfo();
    student.displayAverage();

    return 0;
}