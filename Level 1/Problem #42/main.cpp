#include <iostream>


using namespace std;


void calculateDuration() {
    int days, hours, minutes, seconds;
    double duration;
    cin >> days >> hours >> minutes >> seconds;
    duration = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;

    cout << duration << endl;
}


int main () {
    cout << "Enter days, hours, minutes, seconds to get the duration" << endl;
    calculateDuration();
}