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

    return 0;
}