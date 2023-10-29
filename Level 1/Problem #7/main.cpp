#include <iostream>

using namespace std;


void halfNumber() {
    int num, result;
    cin >> num;
    result = num / 2;
    cout << "Half of" << " " << num <<  " " << "is" << " " << result;
}

int main () {
    cout << "Enter number";
    halfNumber();
}