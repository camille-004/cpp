#include <iostream>

using namespace std;

/*
Break and continue statements in loops.
*/
int main() {
    // Outputs: 0123
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i;
    }
    
    cout << endl;

    // Outputs: 012356789
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i;
    }

    cout << endl;

    char symbol = 'F';
    switch (symbol) {
        case 'F':
            cout << "Fahrenheit" << endl;
            break; // Or else we will move on to next sequence.
        case 'C':
            cout << "Celsius" << endl;
            break;
    }

    return 0;
}
