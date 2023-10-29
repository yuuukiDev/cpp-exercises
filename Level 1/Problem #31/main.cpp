#include <iostream>


using namespace std;



void  powerOfNumber() {
    int n;
    cin >> n;
    int pow2, pow3, pow4;
    pow2 = n * n;
    pow3 = n * n * n;
    pow4 = n * n * n * n;
    cout << pow2 << endl << pow3 << endl << pow4 << endl;
}




int main () {
    cout << "Enter number" << endl;
    powerOfNumber();
}