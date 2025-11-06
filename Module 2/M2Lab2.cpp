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
    // Variable set up
    double width;  // dimensions of the crate
    double length;
    double height;

    // Ask user for dimensions
    cout << "Welcome to the crate volume-cost-profit calculator 9000. Please enter information accurately to ensure accurate results." << endl;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the height: ";
    cin >> height;

    // Calculate volume
    double volume = width * length * height;  // volume formula

    cout << "_____________________" << endl; // blank space
    cout << "Volume =" << "\t" << volume << "cubic units." << endl;

    // Calculate cost
    double cost_per_cubic_unit = 0.23;
    double total_cost = volume * cost_per_cubic_unit;

    cout << "Cost =" << "\t$" << total_cost << endl;

    // Calculate customer's charge
    double customer_charge = volume * 0.5;

    cout << "Customer's charge =" << "\t$" << customer_charge << endl;

    // Calculate profit
    double profit = customer_charge - total_cost;

    cout << "Profit =" << "\t$" << profit << endl;
    
    return 0;
}