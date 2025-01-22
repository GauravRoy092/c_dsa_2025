#include <iostream>
using namespace std;
#include <string>

int main() {
    // arrays
    int marks[5];
    marks[0] = 90;
    marks[1] = 88;
    marks[2] = 92;
    marks[3] = 78;
    marks[4] = 85;

    cout << "Marks: " << marks[0] << " " << marks[1] << " " << marks[2] << " " << marks[3] << " " << marks[4] << endl;
    
    // string array
    string names[3] = {"John", "Doe", "Smith"};
    cout << "Names: " << names[0] << " " << names[1]
            << " " << names[2] << endl;
            
    // 2D array
    int matrix[2][2] = {{1, 2}, {3, 4}};
    cout << "Matrix: " << endl;
    cout << matrix[0][0] << " " << matrix[0][1] <
            < endl;
    cout << matrix[1][0] << " " << matrix[1][1] <
            < endl;
            
    return 0;
}