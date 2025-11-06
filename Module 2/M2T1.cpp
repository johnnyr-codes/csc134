/*
CSC 134
M2T1 - Customer Service!
johnnyr
11/6/25
*/

 // This program simulates a customer service interaction at a retro gaming store.

#include <iostream>
#include <iomanip> // for 2 decimal places
using namespace std;

int main() {
   
    // Variable set up
    string first_name, last_name, full_name; // for customer's name
    string product_name = "flash carts"; // product being sold (A Pokemon Emerald or Platinum flash cart would be awesome XD)
    double cost_each = 0.25;
    double total_cost;
    int number_of_carts_to_purchase;

    // Greet the customer ^_^
    cout << "Welcome to Johnny's " << product_name << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << "!" << endl;

    // Ask customer how much they want to buy
    cout << "How many " << product_name << " would you like to buy today? ";
    cin >> number_of_carts_to_purchase;

    // Calculate the price
    total_cost = number_of_carts_to_purchase * cost_each;

    // Formatting: Set all prices to show 2 decimal places
    cout << setprecision(2) << fixed;

    // Give the result
    cout << "OK, for " << number_of_carts_to_purchase << " " << product_name << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping, retro gamer!" << endl;

    return 0;

}