#include <iostream>


using namespace std;



void factorialOfNumber() {
    int n;
    int result = 1;
    cin >> n;
    if (n < 0) {
        cout << "Rejected" << endl;
        cin >> n;
    } else {
        for (int i = n; i > 0; i--) {
            result *= i;
        }
        cout << result << endl;
    }
}

int main () {
    cout << "Enter a number to get the factorial of it " << endl;
    factorialOfNumber();
}