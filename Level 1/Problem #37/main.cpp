#include <iostream>


using namespace std;


void sumTillNegative99 () {
    int n, sum;
    while(true)  {
        cin >> n;
        if (n == -99) {
            break;
        }
        sum += n;
    }
    cout << sum << endl;
}

int main () {
    cout << "Enter numbers till -99" << endl;
    sumTillNegative99();
}