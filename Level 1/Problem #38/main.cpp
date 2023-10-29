#include <iostream>

using namespace std;


void isPrimeNumber() {
    int n;
    cin >> n;
    if (n == 0 || n == 1) {
        cout << "Not Prime" << endl;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << "Not Prime" << endl;
            break;
        }
        cout << "Prime" << endl;
    }
}


int main () {
    cout << "Enter a number to check if prime or not" << endl;
    isPrimeNumber();
}