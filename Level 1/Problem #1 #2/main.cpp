#include <iostream>

using namespace std;


void printName() {
    cout << "Hello and Welcome" << endl;
    string fName, lName;
    cin >> fName >> lName;
    cout << "Hello, " << fName << lName;
}
int main()
{
    printName();
}
