#include <iostream>



using namespace std;



bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum - n == n;
}


int main () {
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    if (isPerfectNumber(n)) {
        cout << n << " Is Perfect number" << endl;
    } else {
        cout << n << " Isn't Perfect Number" << endl;
    }
}