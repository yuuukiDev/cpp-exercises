#include <iostream>


using namespace std;


bool isPrimeNumber(int n) {
    if (n == 0) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (isPrimeNumber(i)) {
            cout << i << endl;
        }
    }
}