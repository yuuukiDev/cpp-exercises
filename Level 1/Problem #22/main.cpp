#include <iostream>
#include <cmath>

using namespace std;

void circleAreaInscribed() {
    double area, a, b, pi;
    cin >> a >> b;
    pi = 3.14;
    area = pi  * pow(b, 2) / 4 * ((2 * a - b ) / (2 * a + b));
    cout << area;
}

int main () {
    cout << "Enter a and b to calculate circleAreaInscribed" << endl;

    circleAreaInscribed();
}