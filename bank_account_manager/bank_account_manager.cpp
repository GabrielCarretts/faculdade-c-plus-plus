#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
    // Colors //
    string const COLOR_BLUE_BOLD = "\033[1;34m";
    string const COLOR_GREEN_BOLD = "\033[1;32m";
    string const COLOR_WHITE_BOLD = "\033[1;37m";
    string const COLOR_RED = "\033[1;31m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    string account_name, operation_name;
    double original_balance, new_balance, operation_amount;
    int account_number;
    char operation_type, answer;

    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_BLUE_BOLD << "\n\n====> Welcome to the Bank Account Manager! <====\n" << COLOR_RESET;
        cout << COLOR_WHITE_BOLD << "\nEnter the account name: " << COLOR_RESET;
        getline(cin, account_name);
        cout << COLOR_WHITE_BOLD << "Enter the account number: " << COLOR_RESET;
        cin >> account_number;
        while (account_number <= 0)
        {
            cout << COLOR_RED << "\nInvalid account! Account number must be positive: " << COLOR_RESET;
            cin >> account_number;
        }
        cout << COLOR_WHITE_BOLD << "Enter the account balance: $ " << COLOR_RESET;
        cin >> original_balance;

        cout << COLOR_WHITE_BOLD << "Enter the operation to be made (Deposit = D, Withdrawal = W): " << COLOR_RESET;
        cin >> operation_type;
        while (operation_type != 'd' && operation_type != 'D' && operation_type != 'w' && operation_type != 'W')
        {
            cout << COLOR_RED << "\nInvalid option! Please type D or W: " << COLOR_RESET;
            cin >> operation_type;
        }

        // Process //
        if (operation_type == 'd' || operation_type == 'D')
        {
            cout << COLOR_WHITE_BOLD << "Enter the amount to be deposited: $ " << COLOR_RESET;
            cin >> operation_amount;
            while (operation_amount <= 0)
            {
                cout << COLOR_RED << "Invalid amount! Deposit amount must be positive: " << COLOR_RESET;
                cin >> operation_amount;
            }
            operation_name = "Deposit";
            new_balance = original_balance + operation_amount;
        }
        else if (operation_type == 'w' || operation_type == 'W')
        {
            cout << COLOR_WHITE_BOLD << "Enter the amount to be withdrawn: $ " << COLOR_RESET;
            cin >> operation_amount;
            while (operation_amount <= 0)
            {
                cout << COLOR_RED << "Invalid amount! Withdrawal amount must be positive: " << COLOR_RESET;
                cin >> operation_amount;
            }
            operation_name = "Withdrawal";
            new_balance = original_balance - operation_amount;
        }

        // Output //
        cout << fixed << setprecision(2);
        cout << COLOR_BLUE_BOLD << UNDERLINED_TEXT << "\n\n====> Account Summary <====\n" << COLOR_RESET;
        cout << COLOR_WHITE_BOLD << "\nAccount name: " << COLOR_GREEN_BOLD << account_name << COLOR_RESET;
        cout << COLOR_WHITE_BOLD << "\nAccount number: " << COLOR_GREEN_BOLD << account_number << COLOR_RESET;
        cout << COLOR_WHITE_BOLD << "\nOriginal balance: " << COLOR_GREEN_BOLD << "$ " << original_balance << COLOR_RESET;
        cout << COLOR_WHITE_BOLD << "\nOperation type: " << COLOR_GREEN_BOLD << operation_name << COLOR_RESET;
        cout << COLOR_WHITE_BOLD << "\nOperation amount: " << COLOR_GREEN_BOLD << "$ " << operation_amount << COLOR_RESET;
        cout << COLOR_WHITE_BOLD << "\nNew balance: " << COLOR_GREEN_BOLD << "$ " << new_balance << COLOR_RESET;
        if (new_balance < 0)
        {
            cout << COLOR_RED << "\nOVERDRAWN ACCOUNT!!" << COLOR_RESET;
        }

        cout << COLOR_WHITE_BOLD << "\n\nWould you like to calculate another operation? (Y/N) " << COLOR_RESET;
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