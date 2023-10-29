#include <iostream>

using namespace std;

void oddOrEven() {
    int num;
    cin >> num;
    if (num % 2 == 0){
        cout << num << " " << "is Even";

    } else {
        cout << num << " " << "is Odd ";
    }
}
int main (){

    oddOrEven();
}