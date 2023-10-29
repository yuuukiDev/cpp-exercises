#include <iostream>

using namespace std;


void circleArea() {
    double area, r;
    cin >> r;
    area = 3.14 * r * r;
    cout << area;
}

int main () {
    cout << "Enter r to calculate the circle area" << endl;
    circleArea();
}