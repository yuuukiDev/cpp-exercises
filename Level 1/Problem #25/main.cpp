#include <iostream>

using namespace std;


void readUntilAgeBetween () {
    int age; 
    bool result;

    while (true) {
        cin >> age; 
        if (age >= 18 && age <= 45) {
            cout << "Valid" << endl;
            break;    
        }
        else {
            cout << "Invalid" << endl;
        }
    }
}
int main () {
    cout << "Enter Age" << endl;
    readUntilAgeBetween();
}