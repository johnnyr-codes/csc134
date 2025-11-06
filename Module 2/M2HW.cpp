/*
CSC 134
M2HW - Going for Gold!
johnnyr
11/6/25
*/

#include <iostream>
#include <iomanip> // for decimal formatting
using namespace std;

int main() {
    
    // Question 1. Write a program that simulates banking transactions.
    cout << "Welcome to the Question 1 Bank Simulator. For account acceess, please follow the prompts." << endl;
    cout << "Enter your name as it appears on your account: ";
    string account_name;
    cin >> account_name;

    cout << "Hello, " << account_name << ", please enter your account number: " << endl;
    string account_number;
    cin >> account_number;

    cout << "Enter your starting account balance, " << account_name << " :" << endl;
    double starting_balance;
    cin >> starting_balance;

    cout << "Enter an amount to withdraw, " << account_name << " :" << endl;
    double withdrawal;
    cin >> withdrawal;

    cout << "Enter an amount to deposit, " << account_name << " :" << endl;
    double deposit;
    cin >> deposit;

    // Calculate new balance
    double final_balance = starting_balance - withdrawal + deposit;
    cout << setprecision(2) << fixed << showpoint; // formatting to 2 decimal places

    cout << " " << endl; // blank line for spacing
    cout << "Here are the results of your transactions..." << endl;
    cout << "_______________________________" << endl; // underscores for formatting

    cout << "Account Name" << "\t\t" << account_name << endl;
    cout << "Account Number" << "\t\t" << account_number << endl;
    cout << "Final Balance" << "\t\t$" << final_balance << endl;

    // decorative asterisks for transition
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;

    // Question 2. Using M2Lab1 as a basis, write a program to match the new crate conditions.

    // Variable setup
    double width;  // dimensions of the crate
    double length;
    double height;

    // Ask user for dimensions
    cout << "Welcome to the Question 2 Crate Volume-cost-profit Calculator 9000 V2." << endl;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the height: ";
    cin >> height;

    // Calculations setup
    double volume = width * length * height;  // volume formula
    const double cost_per_cubic_foot = 0.3;  // cost to make the crate
    double total_cost = volume * cost_per_cubic_foot;
    const double customer_charge = volume * 0.52; // charge to customer
    double profit = customer_charge - total_cost;

    // Output results
    cout << " " << endl; // blank line for spacing
    cout << "The new results are in!" << endl;
    cout << setprecision(2) << fixed << showpoint; // formatting to 2 decimal places
    cout << "_______________________________" << endl; // blank space
    cout << "Volume" << "\t\t\t" << volume << " cubic feet." << endl;
    cout << "Cost" << "\t\t\t$" << total_cost << endl; 
    cout << "Customer's charge" << "\t$" << customer_charge << endl;
    cout << "Profit" << "\t\t\t$" << profit << endl;

    // decorative asterisks for transition
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;

    // Question 3. Write a program to calculate a pizza party's cost and leftover pizza slices.

    return 0;
}