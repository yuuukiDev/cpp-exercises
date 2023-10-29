#include <iostream>
#include <cmath>
using namespace std;


void powerOfM() {
    int number, m, result;
    cin >> number >> m;
    result = pow(number, m);
    cout << result << endl;
}

int main () {
    cout << "Enter a number" << endl;
    powerOfM();
}