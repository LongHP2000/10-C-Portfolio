// By Long Pham, CodeLab1 Assignment Portfolio
// 07 Some Counting.cpp
// Self learning from sololearn.com, certificate obtained
// Self learning from w3schools.com
// Demonstrates various counting loops using for-loops

#include <iostream>
using namespace std;

int main() {

    // Using sequencing and iteration basic mathematics to calculate these 
    // counting loops, using for loop.
    // Loop counts from zero to 50 in increment of 1.
    // Output results from 0 to 50, then runs the next counting request.
    for (int ix = 0; ix <= 50; ix++) {
        cout << ix << " ";
    }

    /*  endl command ends this line of command.  Next loop of instructions 
        will start on a new line in the terminal screen.*/
    cout << endl;

    // Loop counts down from 50 to zero in increments of 1. 
    // Output results from 50 to 0, then runs the next counting request.
    for (int ix = 50; ix >= 0; ix--) {
        cout << ix << " ";
    }

        /*  endl command ends this line of command.  Next loop of instructions 
        will start on a new line in the terminal screen.*/
    cout << endl;

    // Loop counts from 30 to 50 in incements of 1. 
    // Output results from 30 to 50, then runs the next counting request.
    for (int ix = 30; ix <= 50; ix++) {
        cout << ix << " ";
    }

        /*  endl command ends this line of command.  Next loop of instructions 
        will start on a new line in the terminal screen.*/
    cout << endl;

    // Loop count down from 50 to 10 in inrements of 2.
    // Output results form 50 to 10 in count down steps of 2, then runs the next counting request.
    for (int ix = 50; ix >= 10; ix -= 2) {
        cout << ix << " ";
    }

        /*  endl command ends this line of command.  Next loop of instructions 
        will start on a new line in the terminal screen.*/
    cout << endl;

    // Loop counts starts at 100 to 200 in increments of 5.
    // Output results from 100 to 200 in counting steps of 5, then program coding terminates.
    for (int ix = 100; ix <= 200; ix += 5) {
        cout << ix << " ";
    }

        /*  endl command ends this line of command.  Last set of coding commands, 
        Program ends here, no more commands left in program.*/
    cout << endl;

    return 0;
}
