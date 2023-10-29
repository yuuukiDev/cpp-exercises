#include <iostream>


using namespace std;

void calculateTotalPennies() {
    double totalPenny, totalDollars,  penny, nickel, dime, quarter, dollar;
    cin >> penny >> nickel >> dime >> quarter >> dollar; 
    totalPenny = penny * 1 + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
    totalDollars = totalPenny / 100;
    cout << "Total Pennies:" << " " << totalPenny << endl << "Total Dollars:" << " " << totalDollars << endl;
}

int main () {
    cout << "Enter penny, nickel, dime ,quarter, dollar to calc total of pennies" << endl;
    calculateTotalPennies();
}