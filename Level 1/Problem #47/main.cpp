#include <iostream>


using namespace std;


void loanInstallement() {
    double loanAmount, monthlyPayment, totalMonths;
    cin >> loanAmount >> monthlyPayment;
    totalMonths = loanAmount / monthlyPayment;
    cout << totalMonths << " " << "Months" << endl;
}

int main () {
    cout << "Enter loan amount and monthly payment to calculate how many months to settle the loan" << endl;
    loanInstallement();
}