#include <iostream>

using namespace std;

void driverCase() {
    int age, license, recommendation;
    cin >> age >> license >> recommendation;

    if (age > 21 && license == 1 || recommendation == 1) {
        cout << "Hired";
    } else {
        cout << "Rejected";
    }
}

int main() {
    cout << "Hello!" << endl;
    cout << "Enter your age, press 1 if you have license, otherwise 0" << endl;
    driverCase();
}