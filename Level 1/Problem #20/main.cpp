#include <iostream>
#include <cmath>
using namespace std;

void circleAreaInscribedInSquare() {
    double area, pi, a;
    pi = 3.14;
    cin >> a;
    area = pi * pow(a / 2, 2);
    cout << area;
}

int main() {
    cout << "Enter a to calculate circle area inscribed in a square" << endl;
    circleAreaInscribedInSquare();
}