/*
CSC 134
M2Lab2 - I thought this was C++, not math class!
johnnyr
11/6/25
*/

#include <iostream>
#include <iomanip> // for numerical formatting
using namespace std;

int main() {
    // Variable setup
    double width;  // dimensions of the crate
    double length;
    double height;

    // Ask user for dimensions
    cout << "Welcome to the crate volume-cost-profit calculator 9000. Please verify input for accurate calcs!" << endl;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the height: ";
    cin >> height;

    // Calculations setup
    double volume = width * length * height;  // volume formula
    const double cost_per_cubic_unit = 0.23;  // cost to make the crate
    double total_cost = volume * cost_per_cubic_unit;
    const double customer_charge = volume * 0.5; // charge to customer
    double profit = customer_charge - total_cost;

    // Output results
    cout << " " << endl; // blank line for spacing
    cout << "The results are in!" << endl;
    cout << setprecision(2) << fixed << showpoint; // formatting to 2 decimal places
    cout << "_______________________________" << endl; // blank space
    cout << "Volume" << "\t\t\t" << volume << " cubic units." << endl;
    cout << "Cost" << "\t\t\t$" << total_cost << endl; 
    cout << "Customer's charge" << "\t$" << customer_charge << endl;
    cout << "Profit" << "\t\t\t$" << profit << endl;
    
    return 0;
}