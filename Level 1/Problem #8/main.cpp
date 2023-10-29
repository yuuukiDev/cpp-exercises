#include <iostream>

using namespace std;


void enterMark() {
    int mark;
    cin >> mark;
    if (mark < 50 ) {
        cout << "Failed";
    } else {
        cout << "Sucess";
    }
}

int main() {
    cout << "Enter mark";
    enterMark();
}