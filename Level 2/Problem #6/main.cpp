#include <iostream>


using namespace std;


int sumOfDigits(int n) {
    int result, sum = 0;
    while (n > 0) {
         sum = n % 10;
         n = n / 10;

         result += sum; 
    }
    return result;
}

int main () {
    int n, result;
    cout << "Enter number: " << endl;
    cin >> n;
    result = sumOfDigits(n);
    cout << "Sum Of " << n << " Is " << result << endl;
}