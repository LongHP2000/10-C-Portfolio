// By Long Pham, CodeLab1 Assignment Portfolio
// 06 Brute Force Attack.cpp
// Self learning from sololearn.com, certificate obtained
// Self learning from w3schools.com
// This program simulates a brute-force password guessing attempt with a 5-try limit

#include <iostream>
#include <string>

using namespace std;

// Using sequencing, iteration and selection to create this password simulation.
int main() {
    // Declare variables for password and attempt counter
    string input;
    int attempts = 0;
    const string password = "12345";

    // Loop while attempts are less than 5
    while (attempts < 5) {
        cout << "Enter password: ";
        cin >> input;

        if (input == password) {
            cout << "Welcome to the Secure Area" << endl;
            break;
        } else {
            attempts++;
            cout << "Incorrect password. Attempts left: " << (5 - attempts) << endl;
        }

        if (attempts == 5) {
            cout << "Too many failed attempts. Authorities have been alerted!" << endl;
        }
    }

    return 0;
}
