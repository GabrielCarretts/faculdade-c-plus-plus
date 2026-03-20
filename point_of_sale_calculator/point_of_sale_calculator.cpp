#include <iostream>
#include <clocale>
#include <string>
using namespace std;
int main()

{
    setlocale(LC_ALL, "Portuguese");

    // Variables //
    float current_item_price, discounted_price, discount_percentage, grand_total;
    string current_item_name;
    char answer;
    const string COLOR_ORANGE = "\033[0;33m", COLOR_RESET = "\033[0m", COLOR_BLUE = "\033[34m", COLOR_GREEN = "\033[32m", COLOR_RED = "\033[31m";

    // Input //

    do
    {
        grand_total = 0;
        cout << COLOR_ORANGE << "\n=====> Welcome to the store! <=====" << COLOR_RESET;

        for (int i = 1; i <= 3; i++)
        {
            cout << COLOR_BLUE << "\n\nType the name for product " << i << ": " << COLOR_RESET;
            getline(cin, current_item_name);
            cout << COLOR_BLUE << "Type the item price: " << COLOR_RESET << " U$ ";
            cin >> current_item_price;
            cout << COLOR_BLUE << "Type the discount percentage: " << COLOR_RESET;
            cin >> discount_percentage;
            cin.ignore();

            // Process //
            discounted_price = current_item_price - (current_item_price * (discount_percentage / 100));
            grand_total = grand_total + discounted_price;

            cout << COLOR_BLUE << "\nProduct " << i << ": " << COLOR_RESET << current_item_name;
            cout << COLOR_BLUE << "\nCurrent price: " << COLOR_RESET << " U$ " << current_item_price;
            cout << COLOR_BLUE << "\nDiscounted price: " << COLOR_RESET << " U$ " << discounted_price;
        }

        cout << COLOR_GREEN << "\n\nYour grand total is: U$ " << grand_total << COLOR_RESET;
        cout << COLOR_BLUE << "\n\nWould you like to calculate more products? (Y/N) " << COLOR_RESET;
        cin >> answer;
        cin.ignore();
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }
    } while (answer == 'y' || answer == 'Y');

    system("pause");

    return 0;
}