// #include <iostream>
// using namespace std;

// int main() {

//     // while loop, do-while loop, for loop
//     // while loop
//     int i = 0;
//     while (i < 5) {
//         cout << i << " ";
//         i++;
//     }
//     cout << endl;
    
//     // do-while loop
//     i = 0;
//     do {
//         cout << i << " ";
//         i++;
//     } while (i < 8);
//     cout << endl;
    
//     // for loop
//     for (i = 0; i < 10; i++) {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {

    // while loop, do-while loop, for loop
    // while loop
    int counter = 0;
    while (counter < 5) {
        cout << "While loop iteration: " << counter << endl;
        counter++;
    }
    cout << endl;
    
    // do-while loop
    counter = 0;
    do {
        cout << "Do-while loop iteration: " << counter << endl;
        counter++;
    } while (counter < 8);
    cout << endl;
    
    // for loop
    for (int index = 0; index < 10; index++) {
        cout << "For loop iteration: " << index << endl;
    }
    cout << endl;

    return 0;
}