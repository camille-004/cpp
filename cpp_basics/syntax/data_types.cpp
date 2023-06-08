#include <iostream>
#include <string>

using namespace std;

/*
Playing with data types.
*/
int main() {
    // Int
    int length = 5;
    cout << length << endl;

    // Double
    double pizza_price = 12.99;
    cout << pizza_price << endl;

    // Conversion
    double x = 6.7;
    int y = (int) x;
    cout << "After conversion, " << x << " becomes " << y << endl;

    // Char
    char first_letter = 'a';
    cout << first_letter << endl;

    // String
    string word = "Code";
    cout << word << endl;

    string message = word + " is fun.";
    cout << message << endl;

    // String methods
    cout << "The third letter of " << message << " is " << message[2] << endl;
    
    cout << "There are " << message.length() << " letters in " << message
    << endl;

    // Bool
    bool a = true;
    a = false;
    cout << a;

    return 0;
}