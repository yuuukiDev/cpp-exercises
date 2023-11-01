#include <iostream>


using namespace std;


void rockScissorsPaper() {
        cout << "\n\t\tHello to my first game" << endl;
        cout << "\n\t\tIt is Scissors | Paper | Rock\n\n" << endl;
    int scorePlayer, scoreComputer = 0;
    while(true) {
        cout << "Choose -> [Scissors, Paper, Rock] <- : " << endl;
        string choices[] = {"Rock", "Paper", "Scissors"};
        string playerChoice;
        cin >> playerChoice;
        if (playerChoice != "Rock" && playerChoice != "Paper" && playerChoice != "Scissors") {
            cout << "Something wrong" << endl;
                continue;
        }
        int computerChoiceIndex = rand() % 3;
        string computerChoice = choices[computerChoiceIndex];
        if (playerChoice == computerChoice) {
            cout << "Your Choice: " << playerChoice << " | " << "Computer Choice: " << computerChoice << endl;
            cout << "DRAW " << scorePlayer << " | " << scoreComputer << endl;

        } else if (playerChoice == "Scissors" && computerChoice == "Paper") {
            cout << "Your Choice: " << playerChoice << " | " << "Computer Choice: " << computerChoice << endl;
            scorePlayer++;
            cout << "You WIN " << scorePlayer << " | " << scoreComputer << endl;
        } else if (playerChoice == "Paper" && computerChoice == "Rock") {
            cout << "Your Choice: " << playerChoice << " | " << "Computer Choice: " << computerChoice << endl;
            scorePlayer++;
            cout << "You WIN " << scorePlayer << " | " << scoreComputer << endl;
        } else if (playerChoice == "Rock" && computerChoice == "Scissors") {
            cout << "Your Choice: " << playerChoice << " | " << "Computer Choice: " << computerChoice << endl;
            scorePlayer++;
            cout << "You WIN " << scorePlayer << " | " << scoreComputer << endl;
        } else {
            cout << "Your Choice: " << playerChoice << " | " << "Computer Choice: " << computerChoice << endl;
            scoreComputer++;
            cout << "You LOST " << scorePlayer << " | " << scoreComputer << endl;
        }
        char playMore;
        cout << "Do you wanna play more? (y/n): " << endl;
        cin >> playMore;
        if (playMore != 'y') {
            cout << "Your Score: " << scorePlayer << endl;
            cout << "Computer Score: " << scoreComputer << endl;
            break;
        }
    }
}

int main () {
    rockScissorsPaper();
}