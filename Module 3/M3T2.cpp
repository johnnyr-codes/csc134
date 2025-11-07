/*
CSC 134
M3T2 - Random Number Generator Chaos
johnnyr
11/7/25
*/

#include <iostream>
#include <cmath> // for random numbers
#include <ctime>
using namespace std;

int main() {
    // Greet the user
    cout << "***************************************" << endl; // super awesome asterisk ASCII art
    cout << "*  Welcome to the Craps Simulator V1! *" << endl;
    cout << "***************************************" << endl;
    cout << " " << endl; // blank line for spacing
    cout << "Roll a 7 or 11, you win!" << endl;  // tell the user the win/lose conditions
    cout << "Roll a 2, 3, or 12, you lose!" << endl;
    cout << " " << endl; // blank line for spacing
    cout << " " << endl; // blank line for spacing

    cout << "Time to roll the dice!" << endl;
    cout << "..." << endl; // ellipses for spacing
    int seed = time(0);

    // Create the RNG chaos, set up variables
    srand(seed);
    const int SIDES = 6; // standard 6-sided dice
    int roll1, roll2, total;
    roll1  = (rand() % SIDES) + 1; // Divide and keep the remainder
    cout << "First dice: " << roll1 << endl;

    roll2  = (rand() % SIDES) + 1; // Divide and keep the remainder
    cout << "Second dice: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "..." << endl; // ellipses for spacing
    cout << "You rolled: " << total << endl;

    // Win/lose conditions
     if (total == 7) {
        cout << "Lucky seven! WINNER!" << endl;
        cout << "Play again?" << endl;
    }
    else if (total == 11) {
        cout << "Welcome to 7-ELEVEN, winner!" << endl;
        cout << "Play again?" << endl;
    }
    else if (total == 2) {
        cout << "No step on snek! You lose...CRAP!" << endl;
        cout << "Try again!" << endl;
    }
    else if (total == 3) {
        cout << "Strrrrike THREE...CRAP you're outta here!" << endl;
        cout << "Try again!" << endl;
    }
    else if (total == 12) {
        cout << "CRAP...loser at the top of the hour!" << endl;
        cout << "Try again!" << endl;
    }
    else {
    // Points aside from instant win/loss
        cout << "Your point count for this roll is " << total << endl;
    }

    return 0;
}