#include <iostream>

using namespace std;

void circleAreaThroughDiameter() {
    double area, d;
    cin >> d;
    area = 3.14 * d * d / 4;
    cout << area;
}

int main () {
    cout << "Enter D to calculate the circle area through diameter" << endl;
    circleAreaThroughDiameter();
}