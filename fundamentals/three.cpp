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
    
    return 0;
}