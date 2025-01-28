#include <iostream>
using namespace std;

int main() {
    // typecasting
    int a = 10;
    double b = 20.5;
    
    // static_cast for integer to double
    double c = static_cast<double>(a);
    
    // reinterpret_cast for pointer typecasting
    int* ptr = &a;
    double* dptr = reinterpret_cast<double*>(ptr);
    
    // reinterpret_cast for raw memory access
    char* charPtr = reinterpret_cast<char*>(ptr);
    
    cout << "c: " << c << endl;
    cout << "dptr: " << dptr << endl;
    cout << "charPtr: " << charPtr << endl;
    
    return 0;
}