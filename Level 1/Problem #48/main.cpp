#include <iostream>


using namespace std;


void monthlyLoanInstallment() {
    double loanAmount, months, total;
    cin >> loanAmount >> months;
    total = loanAmount / months;
    cout << total << endl;
}

int main () {
    cout << "Enter lona amount and how many months you need to settle the loan" << endl;
    monthlyLoanInstallment();
}