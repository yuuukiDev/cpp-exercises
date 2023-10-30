#include <iostream>

using namespace std;

int checkNumberAndDigit(int n, int digits) {
    int remainder, count = 0;
    
    while (n > 0) {
        remainder = n % 10;
        n = n / 10;
        if (digits == remainder) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, digits;
    cout << "Enter number: " << endl;
    cin >> n >> digits;
    int result = checkNumberAndDigit(n , digits);
    cout << "Digit is " << digits << " Frequency " << result << " Times." << endl;
}