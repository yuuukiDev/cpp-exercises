#include <iostream>

using namespace std;

void totalSales() {
    int sales, commissionRate, comissionAmount; 

    cin >> sales;

    if (sales >= 10000000) {
        commissionRate = 1;
    } else if (sales >= 500000) {
        commissionRate = 2;
    } else if (sales >= 100000) {
        commissionRate = 3;
    } else if (sales >= 50000) {
        commissionRate = 4;
    } else {
        commissionRate = 0;
    }
    comissionAmount = sales * commissionRate / 100;
    cout << "The commission amount is: $" << comissionAmount << endl;
}

int main () {
    cout << "Enter sales: " << endl;
    totalSales();
}