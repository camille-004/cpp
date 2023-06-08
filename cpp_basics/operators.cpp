#include <iostream>

using namespace std;

int main() {
    cout << "Arithmetic Operators:" << endl;
    int x = 4, y = 2;

    cout << x + y << endl;
    cout << x / y << endl;
    cout << --y << endl;  // Decrement by 1.

    cout << "Relational Operators:" << endl;
    int a = 7, b = 3;
    cout << (a > b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    cout << "Logical Operators:" << endl;
    bool t = true, f = false;
    cout << (t && f) << endl;
    cout << (t || f) << endl;
    cout << !t << endl;

    cout << "Bitwise Operators:" << endl;
    int i = 3;  // 0011
    int j = 9;  // 1001

    int k = i << 2;
    cout << k << endl;  // 1100 -> 12

    k = j >> 1;
    cout << k << endl;  // 0100 -> 4

    k = i | j;
    cout << k << endl;  // 1011 -> 11

    return 0;
}