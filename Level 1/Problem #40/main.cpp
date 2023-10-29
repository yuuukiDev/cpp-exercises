#include <iostream>


using namespace std;


void serviceFeeAndSalesTax() {
    double billValue, serviceFee, salesTax, total;
    cin >> billValue;
    serviceFee = billValue * .1;
    salesTax = billValue * .16;
    total = billValue + serviceFee + salesTax;
    cout << total << endl;
}


int main () {
    cout << "Enter bil value to calculate service fees and sales tax" << endl;
    serviceFeeAndSalesTax();
}