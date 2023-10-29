#include <iostream>
using namespace std;

int printSumOddNumbers() {
    int i, sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    cout << "Enter a number: " << endl;
    int result = printSumOddNumbers();
    cout << "The sum of odd numbers up to the given number is: " << result << endl;
    return 0;
}