#include <iostream>


using namespace std;


bool passGenerator() {
    string pass;
    cin >> pass;
    char start = 'A';
    char end = 'Z';
    string word = "";
    int counter = 0;
    for(char i = start; i <= end; i++) {
        for (char j = start; j <= end; j++) {
            for (char k = start; k <= end; k++) {
                counter++;
                word = word + i;
                word = word + j;
                word = word + k;
                if (word == pass) {
                    cout << "Password Generated: " << word << endl;
                    cout << "After: " << counter << " of tries" << endl;
                    return true;
                }
                word = "";
            }
        }
    }
    return false;
}

int main () {
    cout << "Enter password from 3 letters: " << endl;
    passGenerator();
}