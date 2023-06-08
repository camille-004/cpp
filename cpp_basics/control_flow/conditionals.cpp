#include <iostream>

using namespace std;

int main() {
    int temperature = 60;

    if (temperature < 65) {
        cout << "Too cold!";
    }
    else if (temperature > 75) {
        cout << "Too hot!";
    }
    else {
        cout << "Just right...";
    }

    return 0;
}