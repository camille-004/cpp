#include <iostream>

// We don't have to prepend `std::` to `cout`.
using namespace std;

/*
Trying out variables.
*/
int main() {
    int vote = 100;
    vote = 99;

    cout << vote << endl;

    char first = 'a', second = 'b', third = 'c';

    cout << first << second << third << endl;

    const double pi = 3.14;

    cout << pi * vote << endl;
    return 0;
}