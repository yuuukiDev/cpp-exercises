#include <iostream>


using namespace std;


void dayOfWeek() {
    int num;
    cin >> num;

    if (num == 1) {
        cout << "It's Sunday" << endl;
    } else if (num == 2) {
        cout << "It's Monday" << endl;
    } else if (num == 3) {
        cout << "It's Tuesday" << endl;
    } else if (num == 4) {
        cout << "It's Wednesday" << endl;
    } else if (num == 5) {
        cout << "It's Thursday" << endl;
    } else if (num == 6) {
        cout << "It's Friday" << endl;
    } else if (num == 7) {
        cout << "It's Saturday" << endl;
    } else {
        cout << "Wrong day" << endl;
    }
}

int main () {
    cout << "Enter number of the day" << endl;
    dayOfWeek();
}