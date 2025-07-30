// By Long Pham, CodeLab1 Assignment Portfolio
// 05 Days Of The Month.cpp
// Self learning from sololearn.com, certificate obtained
// Self learning from w3schools.com
// Program tells how many days are in a month using switch statement

#include <iostream>
using namespace std;

// Using sequencing and selection control structure
int main() {
    // Declare a variable to store the month number
    int month;

    // Ask the user to input a number representing the month
    cout << "Enter month number (1-12): ";
    cin >> month;

    // Use switch statement to determine the number of days
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "28 or 29 days (leap year)" << endl;
            break;
        default:
            cout << "Invalid month number" << endl;
    }

    return 0;
}
