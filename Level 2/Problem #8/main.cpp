#include <iostream>


using namespace std;


int checkNumberAndDigit(int n, int digit) {
    int remainder, count = 0;
    while (n > 0) {
        remainder = n % 10;
        n = n / 10;
        if (remainder == digit) {
            count++;
        }
    }
    return count;
}

void allNumberFrequency(int n) {
    for (int i = 0; i < 10; i++) {
        int digit = 0;
        digit = checkNumberAndDigit(n, i);
        if (digit > 0) {
            cout << "Digit " << i << " Frequency is " << digit << " Time(s)" << endl;
        }
    }
}

int main() {
    int n, digit;
    cout << "Enter Number: " << endl;
    cin >> n;
    int result = checkNumberAndDigit(n, digit);
    allNumberFrequency(n);
}