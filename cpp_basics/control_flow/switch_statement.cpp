#include <iostream>

using namespace std;

int main() {
    int grade = 10;

    switch (grade) {
        case 9:
            cout << "Freshman" << endl;
            break;  // Must break, or else will print all the other cases.
        case 10:
            cout << "Sophomore" << endl;
            break;
        case 11:
            cout << "Junior" << endl;
            break;
        case 12:
            cout << "Senior" << endl;
            break;
        default:
            cout << "Invalid" << endl;
            break;
    }
    return 0;
}
