#include <iostream>
using namespace std;
#include <string>

int main() {
    // 1d arrays
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
    int matrix[4][4] = {{1, 23, 9, 8}, {3, 44, 7, 6}};
    cout << "Matrix: " << endl;
    cout << matrix[0][0] << " " << matrix[0][1] << endl;
    cout << matrix[1][0] << " " << matrix[1][1] << endl;
    // 3d array
    int cube[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    cout << "Cube: " << endl;
    cout << cube[0][0][0] << " " << cube[0][0][1] << " " << cube[0][1][0] << " " << cube[0][1][1] << endl;
    cout << cube[1][0][0] << " " << cube[1][0][1] << " " << cube[1][1][0] << " " << cube
    [1][1][1] << endl;
            
    // multidimensional array
    int multi_array[2][2][2][2] = {{{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}}, {{{9, 10}, {11, 12}}, {{13, 14}, {15, 16}}}};
    cout << "Multidimensional Array" << endl;
    cout << multi_array[0][0][0][0] << " " << multi_array[0][0][0][1] << " " << multi_array[0][0][1][0] << " " << multi_array[0][0][1][1] << endl;
    cout << multi_array[0][1][0][0] << " " << multi_array[0][1][0][1] << " "
    << multi_array[0][1][1][0] << " " << multi_array[0][1][1][1] << endl;
    cout << multi_array[1][0][0][0] << " " << multi_array[1][0][0][1] << " " << multi_array[1][0][1][0] << " " << multi_array[1][0][1][1] << endl;
    cout << multi_array[1][1][0][0] << " " << multi_array
    [1][1][0][1] << " " << multi_array[1][1][1][0] << " " << multi_array[1][1][1][1] << endl;

            
    return 0;
}