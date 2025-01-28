#include <string>
#include <iostream>
using namespace std;

int main() {
	string name = "/nGaurav";
	cout << "my name is " << name << endl;
    cout << "my name array is " << name[0] << endl;
    cout << "my name string is " << name.substr(2,4) << endl;
	return 0;
}