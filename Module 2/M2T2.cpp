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
    double house_meal_price = 5.99;
    double tax_rate = 0.08;
    double tax_amount = house_meal_price * tax_rate;
    double total_cost = tax_amount + house_meal_price;

    // Imagine yourself seated at a new retro gaming-themed diner...
    // Your cheerful waitress returns to your table and asks about your meal. You respond and request the check.
    cout << "I'm happy to know you enjoyed our house meal, the Plasma Beam Burger!" << endl;  // Super Metroid lore from an avid fan: Plasma Beam is the strongest beam upgrade with a cool green color, and in the Metroid Prime series it is associated with the fire element
    cout << "Would you mind telling me your first name again for the check, please? ";
    cin >> first_name;
    cout << "Thank you, " << first_name << "!" << endl;

    // The waitress walks away briefly and returns with a printer paper check.
    // Meal price, tax rate, and total cost calculations
    cout << "Plasma Beam Burger: " << house_meal_price << endl;
    cout << "Tax rate: 8%" << endl;
    cout << "Tax amount: " << tax_amount << endl;
    cout << "TOTAL: " << total_cost << endl;

    return 0;
}