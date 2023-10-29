#include <iostream>

using namespace std;

void totalSales() {
    int sales, percentage;
    cin >> sales;
    if (sales > 1000000) {
        percentage = 0.1;
    } else if (sales >= 500000) {
        percentage = 0.2;
    }
}