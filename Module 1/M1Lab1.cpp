/*
CSC 134
M1Lab1 - Something Sales
johnnyr
9/10/25

*/

#include <iostream>
using namespace std;

int main() {
// This program will simulate a storefront for Pokemon GBA flash carts.
// Variable set up
string name = "Johnny";
string item_name = "PKMN flash carts";
int number_of_carts = 100; // number of carts owned
double pricePerCart = 0.25; // price per cart
double total_cost;

// Greet the customer ^_^
cout << "Welcome to " << name << "'s Retro Pokecarts Store!" << endl;

// Ask for an order
// Assume customer wants to buy EVERYTHING!
cout << "We have " << number_of_carts << " " << item_name << " in stock. " << endl;
cout << "Each cart costs $" << pricePerCart << ". " << endl;

// Calculate the total price of all carts
total_cost = number_of_carts * pricePerCart;

// Output results and thank the customer (pls buy! :D)
cout << "To purchase all " << number_of_carts << " carts in stock, it would cost $" << total_cost << " total. " << endl;
cout << "Thank you for shopping with us!" << endl;
}