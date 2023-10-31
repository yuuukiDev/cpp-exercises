#include <iostream>


using namespace std;


void invertedLetter() {
    int n;
    cin >> n;
    char letter = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << letter;
        }
        cout << endl;
        letter++;
    }
}

int main () {
    cout << "Enter Number: " << endl;
    invertedLetter();
}