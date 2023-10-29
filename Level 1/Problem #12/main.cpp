#include <iostream>

using namespace std;

void maxBetweenTwo() {
    int number_one, number_two;
    cin >> number_one >> number_two;
    if (number_one > number_two) {
        cout << number_one;
    } else {
        cout << number_two;
    }
}

int main () {
    cout << "Enter 2 numbers to get the max" << endl;
    maxBetweenTwo();
}