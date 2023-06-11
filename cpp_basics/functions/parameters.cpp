#include <iostream>
#include <string>

using namespace std;

int feetToInches(int ft) {
    return ft * 12;
}


/*
Function with multiple parameters.
*/
double totalPrice(int items, double price, bool discount) {
    if (discount) {
        return 0.8 * items * price;
    }
    else {
        return items * price;
    }
}


/*
Default operator.
*/
void message(string language = "C++") {
    cout << "I like to code with " << language << endl;
}


/*
Passs by reference.
*/
void addOne(int &i) {
    i += 1;
}


int main() {
    cout << feetToInches(6) << endl;

    cout << totalPrice(10, 4.99, true) << endl;

    message("Java");

    int num = 2;
    addOne(num);
    cout << num;

    return 0;
}