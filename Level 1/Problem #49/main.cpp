#include <iostream>


using namespace std;


void atmPinCode() {
    int pin, balance;
    balance = 7500;
    cin >> pin;
    while (true) {
        if (pin != 1234) {
            cout << "Wrong PIN code, try again" << endl;
            cin >> pin;
        } else {
            cout << "Balance is " << balance << endl;
            break;
        }
    }
}

int main () {
    cout << "Enter your PIN code" << endl;
    atmPinCode();
}