#include <iostream>


using namespace std;


int reverseNumber(int num) {
    int remainder, num_two = 0;
    while (num > 0) {
        remainder = num % 10;
        num = num / 10;
        num_two = num_two * 10 + remainder;
    }
    return num_two;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    if (isPalindrome(reverseNumber(n))) {
            cout << "Yes It is " << endl;

    } else {
        cout << "No it is not" << endl;
    }
}