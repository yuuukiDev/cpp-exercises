#include <iostream>

using namespace std;

void validateAge() {
    int age;
    cin >> age;
    if (age >= 18 && age <= 45) {
        cout << "Valid Age";
    } else {
        cout << "Invalid Age";
    }
}

int main() {
    cout << "Enter your age" << endl;
    validateAge();
}