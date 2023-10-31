#include <iostream>

using namespace std;


void printNumberPattern() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            cout << i;
        }
        cout << endl;
     }
}

int main () {
    cout << "Enter Number: " << endl;
    printNumberPattern();
}