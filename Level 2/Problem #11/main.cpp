#include <iostream>


using namespace std;


void invertedNumber() {
    int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter number to invert it: " << endl;
    invertedNumber();
}