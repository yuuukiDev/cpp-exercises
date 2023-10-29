#include <iostream>


using namespace std;


void monthOfYear() {
    int num;
    cin >> num;

    if (num == 1) {
        cout << "It's Janurary" << endl;
    } else if (num == 2) {
        cout << "It's Feburary" << endl;
    } else if (num == 3) {
        cout << "It's March" << endl;
    } else if (num == 4) {
        cout << "It's April" << endl;
    } else if (num == 5) {
        cout << "It's May" << endl;
    } else if (num == 6) {
        cout << "It's June" << endl;
    } else if (num == 7) {
        cout << "It's July" << endl;
    } else if (num == 8) {
        cout << "It's August" << endl;
    } else if (num == 9) {
        cout << "It's September" << endl;
    } else if (num == 10) {
        cout << "It's October" << endl;
    } else if (num == 11) {
        cout << "It's November" << endl;
    } else if (num == 12) {
        cout << "It's December" << endl;
    } else {
        cout << "Wrong month" << endl;
    }
}

int main () {
    cout << "Enter number of the month" << endl;
    monthOfYear();
}