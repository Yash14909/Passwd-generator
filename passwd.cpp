#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string digits = "0123456789";
    string special = "!@#$%^&*()-_=+[]{};:,.<>?";

    // Combine all character sets
    string allChars = upper + lower + digits + special;
    string password = "";

    // Seed the random number generator
    srand(time(0));

    for (int i = 0; i < length; i++) {
        int index = rand() % allChars.length();
        password += allChars[index];
    }

    return password;
}

int main() {
    int length;

    cout << "Enter the desired password length: ";
    cin >> length;

    string password = generatePassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}
