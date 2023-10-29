#include <iostream>



using namespace std;


void weeksAndDays() {
    double numOfHours, numOfDays, numOfWeeks;
    cin >> numOfHours;
    numOfDays = numOfHours / 24; 
    numOfWeeks = numOfDays / 7;
    cout << "Num of days: " << numOfDays << endl << "Num of weeks: " << numOfWeeks << endl;
}


int main () {
    cout << "Enter hours to convert it into days and weeks" << endl;

    weeksAndDays();
}