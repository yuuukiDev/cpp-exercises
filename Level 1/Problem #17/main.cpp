#include <iostream>

using namespace std;

void triangleArea() {
    int area, a, h; 
    cin >> a >> h; 

    area = .5 * a * h;

    cout << area;
}

int main () {
    cout << "enter A , H to calculate area of triangle";
    triangleArea();
}