#include <iostream>

using namespace std;


void avgMarksFail() {
    int num_one, num_two, num_three, result;

    cin >> num_one >> num_two >> num_three;

    result = (num_one + num_two + num_three) / 3;
    cout << result << endl;

    if (result <= 50) {
        cout << "Fail";
    } else {
        cout << "Sucess";
    }
}


int main() {
    cout << "Enter your marks to see if you passed or not!";
    avgMarksFail();
}