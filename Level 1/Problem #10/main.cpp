#include <iostream>

using namespace std;

void avgOfThree() {
    int num_one, num_two, num_three, result;

    cin >> num_one >> num_two >> num_three;

    result = (num_one + num_two + num_three) / 3;
    cout << result;

}

int main() {
    cout << "Enter 3 numbers to get the average";
    avgOfThree();
}