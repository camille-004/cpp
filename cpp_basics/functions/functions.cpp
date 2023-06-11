#include <iostream>
#include <string>

using namespace std;

void printTitle() {
    string msg = "Cam\n";
    cout << msg;
}

double valueOfPi() {
    return 3.1415926535;
}

int main() {
    printTitle();

    double pi = valueOfPi();
    cout << pi << endl;

    return 0;
}