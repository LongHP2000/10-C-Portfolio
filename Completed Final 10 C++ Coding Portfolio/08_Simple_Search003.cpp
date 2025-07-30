// By Long Pham, CodeLab1 Assignment Portfolio
//08 Simple Search.cpp
// Self learning from sololearn.com, certificate obtained
// Self learning from w3schools.com
// Program to search for a string in a string array

#include <iostream>
#include <string>
using namespace std;

// Using sequencing, iteration and selection programming construction.

int main() {
    // Variable declared and initialise array of names
    // Names with given values Jake, Zac, Ian, Ron, Sam and Dave
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchName;

    // Request the user for a name to search
    cout << "Enter name to search: ";
    cin >> searchName;

    // Check if search is true (track if found)
    bool found = false;

    // Loop runs search through the array
    // Array positions start at zero to 5, giving 6 search positions
    for (int i = 0; i < 6; i++) {
        if (names[i] == searchName) {
            found = true;
            break;
        }
    }

    // Display result
    // Error handling added if name is not found in search
    if (found) {
        cout << searchName << " was found in the list." << endl;
    } else {
        cout << searchName << " was not found." << endl;
    }

    return 0;
}
