#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;
int main()

{
    // Variables //
    double volume, radius;
    const double pi = 3.14159;

    // Colors //
    string const COLOR_BLUE = "\033[1;34m";
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_WHITE = "\033[1;37m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";
    char answer;

    // Input //
    do
    {
        cout << COLOR_BLUE << "\n\n====> Welcome to the Sphere Volume Tool! <====\n" << COLOR_RESET;
        cout << COLOR_CYAN << "\nEnter the radius of the sphere: " << COLOR_RESET;
        cin >> radius;
        while (radius <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter a positive number: " << COLOR_RESET;
            cin >> radius;
        }

        // Process //
        volume = (4.0 * pi * radius * radius * radius) / 3.0;

        // Output //
        cout << fixed << setprecision(2);
        cout << COLOR_CYAN << "\nRadius: " << COLOR_WHITE << radius << " units." << COLOR_RESET;
        cout << COLOR_CYAN << "\nVolume: " << COLOR_WHITE << volume << " cubic units." << COLOR_RESET;
        cout << COLOR_CYAN << "\n\nWould you like to calculate another sphere's volume? (Y/N) " << COLOR_RESET;
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
