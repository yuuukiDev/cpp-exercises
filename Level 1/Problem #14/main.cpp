#include <iostream>

using namespace std;

void numSwap() {
    int num_one, num_two, temp; // 10 20 10 
    cin >> num_one >> num_two;
    temp = num_one;
    num_one = num_two;
    num_two = temp;
    cout << num_one << endl << num_two << endl;
    
}
int main () {
    cout << "Enter 2 numbers to swap" << endl;
    numSwap();
}