#include <iostream>

using namespace std;

void tableHeader() {
  cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";
  cout << "\t";
  for (int i = 1; i <= 10; i++)
    cout << i << "\t";
    cout << "\n___________________________________________________________________________________\n";
}

string column(int i) {
  if (i < 10)
    return "   |";
  else
    return "  |";
}

void mul() {
  tableHeader();

  for (int i = 1; i <= 10; i++) {
    cout << " " << i << column(i) << "\t";
    for (int j = 1; j <= 10; j++)
        cout << i * j << "\t";
    cout << endl;
  }
}

int main() {
  mul();

}
