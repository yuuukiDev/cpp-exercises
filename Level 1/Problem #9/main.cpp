#include <iostream> 


using namespace std;

void sumThreeNumebers() {
    int num_one, num_two, num_three, result;
    cin >> num_one >> num_two >> num_three;
    result = num_one + num_two + num_three;
    cout << result;
}


int main() {
    cout << "Enter three numbers";

    sumThreeNumebers();
}