#include <iostream>

using namespace std;


void rectangleArea() {
    int area, a, b;
    cin >> a >> b;
    area = a * b;
    cout << area;
}

int main() {
    cout << "enter A , B to calculate rectangle area" << endl;
    rectangleArea();
}