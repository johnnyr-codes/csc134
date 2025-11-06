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
    cout << "Enter your first name: " << endl;
    string account_first_name;
    cin >> account_first_name;

    cout << "Enter your last name: " << endl;
    string account_last_name;
    cin >> account_last_name;

    cout << "Hello, " << account_first_name << ", please enter your account number: " << endl;
    string account_number;
    cin >> account_number;

    cout << "Enter your starting account balance, " << account_first_name << ":" << endl;
    double starting_balance;
    cin >> starting_balance;

    cout << "Enter an amount to withdraw, " << account_first_name << ":" << endl;
    double withdrawal;
    cin >> withdrawal;

    cout << "Enter an amount to deposit, " << account_first_name << ":" << endl;
    double deposit;
    cin >> deposit;

    // Calculate new balance
    double final_balance = starting_balance - withdrawal + deposit;
    cout << setprecision(2) << fixed << showpoint; // formatting to 2 decimal places

    cout << " " << endl; // blank line for spacing
    cout << "Here are the results of your transactions..." << endl;
    cout << "_______________________________" << endl; // underscores for formatting

    cout << "Account Name" << "\t\t" << account_first_name << " " << account_last_name << endl;
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

    // Ask the user for input on their spectacular pizza party.
    // Need to know: number of pizzas ordered, slices per pizza, number of visitors.
    cout << "Welcome to the Question 3 Pizza Party Planner-O-Matic! We need some info from you to help you plan..." << endl;
    cout << " " << endl; // blank line for spacing
    cout << "How many pizzas do you plan to order? ";
    int number_of_pizzas_ordered;
    cin >> number_of_pizzas_ordered;

    cout << "How many slices per pizza? ";
    int slices_per_pizza;
    cin >>slices_per_pizza;

    cout << "How many visitors do you plan to invite? ";
    int number_of_visitors;
    cin >> number_of_visitors;

    cout << " " << endl; // blank line for spacing

    // Calculations setup
    int total_slices = number_of_pizzas_ordered * slices_per_pizza;
    int total_slices_eaten = number_of_visitors * 3;
    int leftover_slices = total_slices - total_slices_eaten;
    cout << "Alrighty, if I budget three slices per person, you will have..." << endl;
    cout << leftover_slices << " slices of pizza left over after the party." << endl;
    
    cout << " " << endl; // blank line for spacing

    cout << "I hope that's enough...hehehe..." << endl;

    // decorative asterisks for transition
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;
    cout << "*******************************" << endl;
   
    
    // Question 4. Write a program that cheers for FTCC's sports teams, woot woot!
    cout << "Welcome to the Question 4 College Sports Team Cheer Maker!" << endl;
    cout << " " << endl; // blank line for spacing

    // Ask user for college and team names
    cout << "Enter your college's name in abbreviated form (e.g., FTCC): " << endl;
    string school;
    cin >> school;
    cout << " " << endl; // blank line for spacing

    cout << "Enter your college's team name (e.g., Trojans): ";
    string team;
    cin >> team;
    cout << " " << endl; // blank line for spacing

    // Output a good 'ol cheer
    cout << " " << endl; // blank line for spacing
    cout << "Let's go " << school << endl;
    cout << "Let's go " << school << endl;
    cout << "Let's go " << school << endl;
    cout << "Let's go " << team << endl;
    cout << " " << endl; // blank line for spacing
    cout << "Go Trojans!" << endl;

    return 0;
}