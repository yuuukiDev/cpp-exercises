#include <iostream>


using namespace std;


string encrypt(string user) {
    for (int i = 0; i < user.length(); i++) {
        user[i] ^= 1;
    }
    return user;
}

string decrypt(string user) {
    for (int i = 0; i < user.length(); i++) {
        user[i] ^= 1;
    }
    return user;
}

int main () {
    string user;
    cout << "Enter User: " << endl; 
    cin >> user;
    string encryptResult = encrypt(user);
    string decryptResult = decrypt(encryptResult);
    cout << "User: " << user << endl;
    cout << "User Encrypted: " << encryptResult << endl;
    cout << "User Decrypted: " << decryptResult << endl;
}