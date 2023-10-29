#include <iostream>


using namespace std;


void sumEvenNumbers () {
    int sum, n;
    cin >> n;
    for (int i = 0; i <= n; i += 2) {
        sum += i;
    }
    cout << sum;
}


int main () {
    cout << "Enter a number" << endl;
    sumEvenNumbers();
}