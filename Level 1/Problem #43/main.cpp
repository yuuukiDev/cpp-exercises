#include <iostream>


using namespace std;


void secondToDayToHourMinuteSecond() {
    int n, day, hour, minute, seconds;
    cin >> n;
    day = n / (24 * 60 * 60);
    hour = n / (60 * 60);
    minute = (n %(60 * 60) / 60);
    seconds = n % 3600;
    cout << day << ":" << hour << ":" << minute << ":" << seconds << endl;
}

int main () {
    cout << "Enter number of seconds" << endl;
    secondToDayToHourMinuteSecond();
}