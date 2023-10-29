#include <iostream>


using namespace std;

void printNumbers() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}
int main () {
    cout << "Enter number" << endl;

    printNumbers();
}