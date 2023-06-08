#include <iostream>
#include <string>

using namespace std;

/*
References demonstration.
*/
int main() {
    int exam_grade = 85;
    int& score = exam_grade;

    // Changing score changes exam_grade.
    score += 7;

    cout << exam_grade << endl;
    cout << score << endl;

    // Print the memory address of message.
    string message = "Hello World!";
    cout << message << endl;
    cout << &message << endl;

    return 0;
}