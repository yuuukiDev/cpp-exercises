#include <iostream>
#include <cmath>
using namespace std;


void circleAreaDescribedArbitaryTriangle() {
    double area, a, b, c, p, pi;
    pi = 3.14;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    double t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b ) * (p - c)));
    t = t * t;
    area = pi * t;
    cout << area;
}

int main () {
    cout << "Enter a b c to calculate circle area described aribtary triangle" << endl;
    circleAreaDescribedArbitaryTriangle();
}