#include <iostream>
#include <cmath>
using namespace std;

void circleAreaAlongCircumference() {
    double area, l, pi;
    pi = 3.14;
    cin >> l;
    area = pow(l, 2) / (pi * 4);

    cout << area;
}

int main() {
    cout << "Enter l to calculate circle area along circumrefence" << endl;

    circleAreaAlongCircumference();
}