#include <iostream>

using namespace std;

void maxOfThree() {
    int number_one, number_two, number_three;
    cin >> number_one >> number_two >> number_three;

    if (number_one > number_two && number_one > number_three) {
        cout << number_one;
    } else if (number_two > number_three) {
        cout << number_two;
    } else {
        cout << number_three;
    }
}

int main() {
    cout << "Enter 3 numbers to get the max of them" << endl;

    maxOfThree();
}