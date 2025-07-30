#include <iostream>      // Library: Input and Output operations
#include <string>        // Library: String handling

// Library: Current time for seeding randomness
// #include <ctime>

// Library: General utilities
#include <algorithm>     // Library: For std::shuffle
#include <random>        // Library: For random device and engine

using namespace std;

// Using sequencing and selection control structure.  
int main() {
    // Variable: Holds the user's total score
    int score = 0;

    // Arrays: List of 10 countries
    string countries[10] = {"Denmark", "England", "France", "Australia", "China", "Italy", "America", "Romania", 
        "Egypt", "Germany"};

    // Arrays: List of matching capitals (index aligned with countries array)
    string capitals[10]  = {"Copenhagen", "London", "Paris", "Canberra", "Beijing", "Rome", "Washington", "Bucharest",
         "Cairo", "Berlin"};

    // Array: Create an array of indexes for shuffling question order
    int indexes[10];
    for (int i = 0; i < 10; ++i) {
        // Loop: Populate index values from 0 to 9
        indexes[i] = i;
    }

    // Random Generator: Used for shuffling questions randomly
    random_device rd;                        // Random seed from hardware
    default_random_engine rng(rd());         // Random engine using the seed
    shuffle(indexes, indexes + 10, rng);     // Algorithm: Shuffle the index array

    // Loop: Ask the user 10 randomised questions
    for (int i = 0; i < 10; ++i) {
        int idx = indexes[i];                // Variable: Current index after shuffle
        string userAnswer;                   // Variable: Stores user's input

        // Output: Ask the user a question
        cout << "Question " << (i + 1) << ": What is the capital of " << countries[idx] << "? ";
        getline(cin, userAnswer);            // Input: Read full user input

        // Conditional: Compare user input with correct capital (case-sensitive)
        if (userAnswer == capitals[idx]) {
            cout << "Correct!\n\n";          // Output: Correct message
            score++;                         // Score Update: Add 1 point
        } else {
            cout << "Wrong. The correct answer is: " << capitals[idx] << "\n\n";  // Output: Show correct answer
        }
    }

    // Output: Final result after quiz completion
    cout << "Quiz Over!\n";
    cout << "You scored " << score << " out of 10.\n";

    return 0;   // Exit: End of program
}
