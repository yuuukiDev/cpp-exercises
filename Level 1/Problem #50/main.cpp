#include <iostream>


using namespace std;


void atmPin() {
    int tries = 3;
    int pin, balance;
    balance = 7500;
    cin >> pin;

    while (pin != 1234 && tries > 1) {
        tries--;
        cout << "Wrong, try again. You have " << tries << " " << "Attempts left" << endl;
        cin >> pin;
    }
    if (pin == 1234) { 
        cout << "Balance: " << balance << endl;
    } else {
        cout << "Card Locked" << endl;
    }
}

int main () {
    cout << "Enter pin" << endl;
    atmPin();
}