#include <string>
#include <iostream>

using namespace std;

int main(){
    int a = 34;
    int* ptra;
    ptra = &a;
    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *ptra << endl;
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << ptra << endl;
    cout << "The address of pointer ptra is " << &ptra << endl;
    cout << "The value of pointer ptra is " << ptra << endl;

    return 0;
}