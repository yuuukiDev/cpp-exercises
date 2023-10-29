#include <iostream>
#include <cmath>


using namespace std;

void rectangleAreaThroughDiagonal() {
    double area, a, d;
    cin >> a >> d;
    area = a * sqrt((d * d) - (a * a));
    cout << area;
}

int main () {
    cout << "Enter a , d to calc" << endl;
    rectangleAreaThroughDiagonal();
}