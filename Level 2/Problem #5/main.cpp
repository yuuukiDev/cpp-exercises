#include <iostream>



using namespace std;


int reversedNumber(int n) {
    int reversed = 0;
    int remainder;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}

int main () {
    int n;
    cout << "Enter Number to reverse it: " << endl;
    cin >> n;
    int result = reversedNumber(n);
    cout << result << endl;

}