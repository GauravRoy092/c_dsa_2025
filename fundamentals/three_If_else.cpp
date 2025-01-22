#include <iostream>
using namespace std;

int main() {

    // if - else statements
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    // else -if statement
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    //  switch - case statement
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;
    
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Average!" << endl;
            break;
        case 'D':
            cout << "Below average!" << endl;
            break;
        case 'F':
            cout << "Failed!" << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
    }
    
    return 0;
}