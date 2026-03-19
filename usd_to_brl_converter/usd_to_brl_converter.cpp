// Construa um algoritmo que leia a cotação do dólar, leia um valor em dólares, converta esse valor para Real e mostre o resultado.//

#include <iostream>
using namespace std;
int main()

{

    // Variables //
    double usd_amount, brl_amount, exchange_rate;
    char answer;
    const string COLOR_RED = "\033[1;31m", COLOR_GREEN = "\033[1;32m", COLOR_CYAN = "\033[1;36m", COLOR_RESET = "\033[0m";

    do
    {
        // Input //
        cout << COLOR_CYAN << "=====> Welcome to the USD to BRL Converter! <=====" << COLOR_RESET;
        cout << COLOR_CYAN << "\n\nEnter the" << COLOR_GREEN << " U$D" << COLOR_CYAN << " amount: " << COLOR_GREEN << "U$D " << COLOR_RESET;
        cin >> usd_amount;
        while (usd_amount <=0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter a positive number: " << COLOR_RESET;
            cin >> usd_amount;
        }
        cout << COLOR_CYAN << "Enter the exchange rate: " << COLOR_RESET;
        cin >> exchange_rate;
        while (exchange_rate <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter a positive number: " << COLOR_RESET;
            cin >> exchange_rate;
        }

        // Process //
        brl_amount = usd_amount * exchange_rate;

        // Output //
        cout << "\n\n";
        cout << COLOR_CYAN << "The amount of " << COLOR_GREEN << usd_amount << " U$D" << COLOR_CYAN << " in BRL is " << COLOR_GREEN << brl_amount << " BRL." << COLOR_RESET;
        cout << COLOR_CYAN << "\n\nWould you like to calculate another value? (Y/N) " << COLOR_RESET;
        cin >> answer;
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }
    } while (answer == 'y' || answer == 'Y');

    system("pause");

    return 0;
}