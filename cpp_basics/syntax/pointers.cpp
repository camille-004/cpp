#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "John";
    string* ptr = nullptr;

    ptr = &name; // Store the memory address of name.

    cout << ptr << endl;  // Print memory address.
    cout << *ptr << endl;  // Print value.

    *ptr = "Robin";  // Change the value of name.

    cout << *ptr << endl;  // Print value.
    cout << name << endl;  // Print value.

    return 0;
}