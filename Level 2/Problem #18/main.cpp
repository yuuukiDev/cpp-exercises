#include <iostream>
#include <cstdlib>


using namespace std;


void randomNumberFrom1To10() {
    int n = 10;
    srand(time(0));
    for(int i = 0; i < 3; i++) {
        cout << rand() % n << endl;
    }
}

int main () {
    randomNumberFrom1To10();
}