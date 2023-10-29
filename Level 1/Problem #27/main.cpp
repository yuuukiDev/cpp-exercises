#include <iostream>

using namespace std;


void printNumbers() {
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--) {
        cout << i << endl;
    }
}
int main () {
    cout << "Enter number" << endl;
    printNumbers();
}