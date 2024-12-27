#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string SID;
    string SNAME;
    string CLASS;
    bool isStudentAdded; 

public:

    Student() : isStudentAdded(false) {}

    void addStudent() {
        cout << "\nEnter Student ID (SID): ";
        cin >> SID;
        cin.ignore(); 
        cout << "Enter Student Name: ";
        getline(cin, SNAME); 
        cout << "Enter Student Class: ";
        getline(cin, CLASS);

        isStudentAdded = true;
        cout << "Student added successfully." << endl;
    }

    void displayStudentDetails() {
        if (isStudentAdded) {
            cout << "\nStudent Details:" << endl;
            cout << "Student ID: " << SID << endl;
            cout << "Student Name: " << SNAME << endl;
            cout << "Student Class: " << CLASS << endl << endl;
        } else {
            cout << "\nNo student has been added yet!" << endl << endl;
        }
    }
};

int main() {
    Student student; 
    int choice;

    do {
        cout << "\n=== Student Management System ===" << endl;
        cout << "1. Add a new student" << endl;
        cout << "2. Display student details" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student.addStudent(); 
                break;
            case 2:
                student.displayStudentDetails();  
                break;
            case 3:
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    } while (choice != 3); 

    return 0;
}