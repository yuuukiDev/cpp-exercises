#include <iostream>

using namespace std;

void fullName() {
    string firstName, lastName;

    cin >> firstName >> lastName;
    cout << firstName << " " << lastName;
}
int main() {
    cout << "Enter FirstName and LastName";
    fullName();
}