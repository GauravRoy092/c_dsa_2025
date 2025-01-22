#include <iostream>
using namespace std;

int main (){
    //  taking user Input 
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // calculating operators
    int sum1 = num1 + num2;
    int sum2 = num1 - num2;
    int sum3 = num1 * num2;
    float sum4 = (float)num1 / num2;
    
    // displaying the result
    cout << "Sum is: " << sum1 << endl;
    cout << "diff is: " << sum2 << endl;
    cout << "Mul is: " << sum3 << endl;
    cout << "Div is: " << sum4 << endl;
    return 0;
}