#include <iostream>


using namespace std;


void alphabetAAA_ZZZ() {
    char start = 'A';
    char end = 'Z';
    for(char i = start; i <= end; i++) {
        for (char j = start; j <= end; j++) {
            for (char k = start; k <= end; k++) {
                cout << i << j << k << endl;
            }
        }
    }
}

int main () {
    alphabetAAA_ZZZ();
}