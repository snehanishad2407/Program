#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    string name;
    int age;
    int rollNo;

    cout << "==== Student Management System ====" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display Student" << endl;
    cout << "3. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter student name:" << endl;
            cin.ignore();
            getline(cin, name);

            cout << "Enter age:" << endl;
            cin >> age;

            cout << "Enter Roll number:" << endl;
            cin >> rollNo;

            cout << "\n--- Student Details ---" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll Number: " << rollNo << endl;

            cout << "Student added successfully!" << endl;
            break;

        case 2:
            cout << "No student data available." << endl;
            break;

        case 3:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}