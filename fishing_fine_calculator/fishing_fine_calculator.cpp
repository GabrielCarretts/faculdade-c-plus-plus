#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Colors //
    string const COLOR_TEAL_BOLD = "\033[1;36m";
    string const COLOR_BLUE = "\033[34m";
    string const COLOR_GREEN_BOLD = "\033[1;32m";
    string const COLOR_WHITE = "\033[37m";
    string const COLOR_RED = "\033[1;31m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    float fishing_weight, excess_weight = 0;
    double fine = 0;
    char answer;
    string fisherman_name;

    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_TEAL_BOLD << "\n\n====> Welcome to the Fishing Fine Calculator <====\n" << COLOR_RESET;
        cout << COLOR_BLUE << "\nFisherman's name: " << COLOR_RESET;
        getline(cin, fisherman_name);
        cout << COLOR_BLUE << "Total catch weight (kg): " << COLOR_RESET;
        cin >> fishing_weight;
        while (fishing_weight < 0)
        {
            cout << COLOR_RED << "\nInvalid number! Fishing weight must be zero or greater: " << COLOR_RESET;
            cin >> fishing_weight;
        }

        // Process //
        if (fishing_weight > 50)
        {
            excess_weight = fishing_weight - 50;
            fine = excess_weight * 4;
        }

        // Output //
        cout << fixed << setprecision(2);
        cout << UNDERLINED_TEXT << COLOR_TEAL_BOLD << "\n\n====> Summary <====\n" << COLOR_RESET;
        cout << COLOR_BLUE << "\nFisherman's name: " << COLOR_WHITE << fisherman_name << COLOR_RESET;
        cout << COLOR_BLUE << "\nCatch weight: " << COLOR_WHITE << fishing_weight << " kg" << COLOR_RESET;

        if (fishing_weight > 50)
        {
            cout << COLOR_RED << "\n\nExcess weight detected!" << COLOR_RESET;
            cout << COLOR_BLUE << "\nExcess weight: " << COLOR_RED << excess_weight << " kg" << COLOR_RESET;
            cout << COLOR_BLUE << "\nApplicable fine: " << COLOR_RED << "$ " << fine << COLOR_RESET;
        }

        else
        {
            cout << COLOR_GREEN_BOLD << "\nCatch is within the legal limit." << COLOR_RESET;
        }

        // Loop //
        cout << COLOR_TEAL_BOLD << "\n\nProcess another entry? (Y/N) " << COLOR_RESET;
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