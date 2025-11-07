/*
CSC 134
M3T1 - Are Rectangles Just Misunderstood Squares?
johnnyr
11/7/25
*/

#include <iostream>
using namespace std;

int main() {
    // Variable setup
    double length1, width1, length2, width2; 
    double area1, area2;

    // Ask for the rectangle dimensions
    cout << "Welcome to the Rectangle Calculator XL! This program can compute area for two rectangles." << endl;
    cout << " " << endl; // blank line for spacing
    cout << "For rectangle #1, enter the length: ";
    cin >> length1;

    cout << "Now please enter the width: ";
    cin >> width1;

    cout << "Now for rectangle #2...enter the length: ";
    cin >> length2;

    cout << "Lastly..please enter the width: ";
    cin >> width2;

    // Area formula
    area1 = length1 * width1;
    area2 = length2 * width2;

    // Output results!
    cout << " " << endl; // blank line for spacing
    cout << " " << endl; // blank line for spacing
    cout << "Rectangle #1 area: " << "\t\t" << area1 << " square units." << endl;
    cout << "Rectangle #2 area: " << "\t\t" << area2 << " square units." << endl;
    
    cout << " " << endl; // blank line for spacing
    // Output a comparison of the two areas
    if (area1 > area2) {
        cout << "Rectangle #1's area is larger." << endl;
    }

    if (area2 > area1) {
        cout << "Rectangle #2's area is larger'." << endl;
    }

    if (area1 == area2) {
        cout << "Both rectangles have the same area!" << endl;
    }

    return 0;
}