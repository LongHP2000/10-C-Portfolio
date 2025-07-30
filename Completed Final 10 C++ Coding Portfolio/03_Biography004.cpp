// By Long Pham, CodeLab1 Assignment Portfolio
// Simple capital cities quiz with case-insensitive answer checking
// Using sequencing, iteration and selction control structures.

#include <iostream>
#include <string>
#include <algorithm>  // for transform

using namespace std;

int main() {
    // Declare string to store user answer
    string answer;

    // Ask the capital of France
    cout << "What is the capital of France? ";
    getline(cin, answer);

    // Convert answer to lowercase for case-insensitive comparison
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    // Check if the answer matches
    if (answer == "paris") {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong answer. The correct answer is Paris." << endl;
    }

    return 0;
}
