/*
CSC 134
M2T2 - I'm ready for the check!
johnnyr
11/6/25
*/

#include <iostream>
#include <iomanip> // for formatting in 2 decimal places
using namespace std;

int main () {

    // variable set up
    string first_name;
    string meal = "🍔 Plasma Beam Burger"; // Super Metroid lore from an avid fan: Plasma Beam is the strongest beam upgrade with a cool green color, and in the Metroid Prime series it is associated with the fire element
    double house_meal_price = 5.99;
    double tax_rate = 0.08;
    double tax_amount = house_meal_price * tax_rate;
    double total_cost;

    // Imagine yourself seated at a new retro gaming-themed diner...
    // Your cheerful waitress returns to your table and asks about your meal. You respond and request the check.
    cout << "I'm happy to know you enjoyed our house meal, the Plasma Beam Burger!" << endl;  
    cout << "Would you mind telling me your first name again for the check, please? ";
    cin >> first_name;
    cout << "Thank you, " << first_name << "!" << endl;
    cout << "I'll be right back with your check." << endl;
    // The waitress walks away briefly and returns with a printer paper check.

    // Blank line for spacing
    cout << "      " << endl;

    // Print the check
    cout << "Here is your check, " << first_name << ":" << endl;
    cout << "      " << endl;

    // Meal price, tax rate, and total cost calculations

    total_cost = tax_amount + house_meal_price;
    cout << setprecision(2) << fixed; // formatting to 2 decimal places

    cout << "THANK YOU FOR DINING WITH US!" << endl;
    cout << "------------------------------" << endl;
    cout << meal << "\t$" << house_meal_price << endl;
    cout << "Tax:" << "\t\t\t$" << tax_amount << endl;
    cout << "------------------------------" << endl;
    cout << "TOTAL:" << "\t\t\t$" << total_cost << endl;

    return 0;
}