#include <iostream>

using namespace std;

void simpleCalculator() {
    int num_one, num_two, result;
    char operator_type;
    cin >> num_one >> num_two >> operator_type;
    
    if (operator_type == '+') {
        result = num_one + num_two;
    } else if (operator_type == '-') {
        result = num_one - num_two;
    } else if (operator_type == '*') {
        result = num_one * num_two;
    } else if (operator_type == '/') {
        result = num_one / num_two;
    } else if (operator_type == '%') {
        result = num_one % num_two;
    } else {
        cout << "Something went wrong!, try again" << endl; 
    }
    cout << result << endl;
}

int main () {
    cout << "Enter 2 numbers and choose operator" << endl;
    simpleCalculator();
}