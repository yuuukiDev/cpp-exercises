#include <iostream> 


using namespace std;

void payReminder() {
    int totalBill, cashPaid, result;
    cin >> totalBill >> cashPaid;
    result = cashPaid - totalBill;
    cout << result << endl;
}

int main () {
    cout << "Enter total bills and cash paid" << endl;
    payReminder();
}