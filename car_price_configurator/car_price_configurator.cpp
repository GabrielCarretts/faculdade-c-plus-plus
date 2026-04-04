#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
    // Colors //
    string const COLOR_PINK_BOLD = "\033[1;35m";
    string const COLOR_BLUE_BOLD = "\033[1;36m";
    string const COLOR_YELLOW_BOLD = "\033[1;33m";
    string const COLOR_GREEN_BOLD = "\033[1;32m";
    string const COLOR_PURPLE = "\033[35m";
    string const COLOR_RED = "\033[1;31m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    double base_price, final_price;
    char answer, opt_electric, opt_ac, opt_lock, opt_paint, opt_steering, payment;

    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_PINK_BOLD << "\n\n====> Welcome to the Car Price Calculator <====\n" << COLOR_RESET;
        cout << COLOR_BLUE_BOLD << "\nEnter the base price of the car: $ " << COLOR_RESET;
        cin >> base_price;
        while (base_price <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Enter a positive price: " << COLOR_RESET;
            cin >> base_price;
        }

        final_price = base_price;

        // Optionals //
        cout << COLOR_YELLOW_BOLD << "\nElectric windows (Y/N)? " << COLOR_RESET;
        cin >> opt_electric;
        while (opt_electric != 'y' && opt_electric != 'Y' && opt_electric != 'n' && opt_electric != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> opt_electric;
        }
        if (opt_electric == 'y' || opt_electric == 'Y')
            final_price += 500;

        cout << COLOR_YELLOW_BOLD << "Air conditioning (Y/N)? " << COLOR_RESET;
        cin >> opt_ac;
        while (opt_ac != 'y' && opt_ac != 'Y' && opt_ac != 'n' && opt_ac != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> opt_ac;
        }
        if (opt_ac == 'y' || opt_ac == 'Y')
            final_price += 2000;

        cout << COLOR_YELLOW_BOLD << "Central lock & alarm (Y/N)? " << COLOR_RESET;
        cin >> opt_lock;
        while (opt_lock != 'y' && opt_lock != 'Y' && opt_lock != 'n' && opt_lock != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> opt_lock;
        }
        if (opt_lock == 'y' || opt_lock == 'Y')
            final_price += 500;

        cout << COLOR_YELLOW_BOLD << "Metallic paint (Y/N)? " << COLOR_RESET;
        cin >> opt_paint;
        while (opt_paint != 'y' && opt_paint != 'Y' && opt_paint != 'n' && opt_paint != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> opt_paint;
        }
        if (opt_paint == 'y' || opt_paint == 'Y')
            final_price += 1000;

        cout << COLOR_YELLOW_BOLD << "Power steering (Y/N)? " << COLOR_RESET;
        cin >> opt_steering;
        while (opt_steering != 'y' && opt_steering != 'Y' && opt_steering != 'n' && opt_steering != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> opt_steering;
        }
        if (opt_steering == 'y' || opt_steering == 'Y')
            final_price += 2500;

        // Payment //
        cout << COLOR_YELLOW_BOLD << "\nCash payment (Y/N)? " << COLOR_RESET;
        cin >> payment;
        while (payment != 'y' && payment != 'Y' && payment != 'n' && payment != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> payment;
        }
        if (payment == 'y' || payment == 'Y')
        {
            final_price *= 0.95;
        }

        // Output //
        cout << fixed << setprecision(2);
        cout << UNDERLINED_TEXT << COLOR_PINK_BOLD << "\n\n====> Final Price <====\n" << COLOR_RESET;
        cout << COLOR_PURPLE << "Total price: " << COLOR_RESET << COLOR_GREEN_BOLD << "$ " << final_price << COLOR_RESET;
        cout << COLOR_PINK_BOLD << "\n\nWould you like to calculate another car? (Y/N) " << COLOR_RESET;
        cin >> answer;

        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }

        cin.ignore();
    } while (answer == 'y' || answer == 'Y');

    system("pause");
    return 0;
}