#include <iostream>


using namespace std;


void whatIsYourGrade() {
    int grade;
    cin >> grade;
    if (grade >= 90) {
        cout << "Your Grade is A" << endl;
    } else if (grade >= 80) {
        cout << "Your Grade is B" << endl;
    } else if (grade >= 70) {
        cout << "Your Grade is C" << endl;
    } else if (grade >= 60) {
        cout << "Your Grade is D" << endl;
    } else if (grade >= 50) {
        cout << "Your Grade is E" << endl;
    } else {
        cout << "Your Grade is F" << endl;
    }

}

int main () {
    cout << "Enter your grade to check" << endl;
    whatIsYourGrade();
}