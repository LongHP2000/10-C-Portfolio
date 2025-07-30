// By Long Pham, CodeLab1 Assignment Portfolio
// 10 Is It Even.cpp
// Self learning from sololearn.com, certificate obtained
// Self learning from w3schools.com
// Tests if a number is even or odd using a separate function

#include <iostream>
using namespace std;

// Function that checks if a number is even or odd
string checkEven(int number) {
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

// Using sequencing and selction programming constructs
// Main function to execute this program
int main() {
    int num;

    // Ask user for input
    cout << "Enter a number: ";
    cin >> num;

    // Call function and display result
    string result = checkEven(num);
    cout << result << endl;

    return 0;
}
