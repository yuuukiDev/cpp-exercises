#include <iostream>

using namespace std;


void invertedLetterPattern() {
    int n;
    cin >> n;
    char letter = 'Z' - n + 1;
    
    for(int i = n; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            cout << letter;
        }
        cout << endl;
        letter--;
    }
}

int main () {
    cout << "Enter number: " << endl;

    invertedLetterPattern();
}