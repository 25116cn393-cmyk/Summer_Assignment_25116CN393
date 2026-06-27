#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 10000;
    double amount;

    do
    {
        cout << "\n====== ATM MENU ======\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Current Balance: Rs. " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0)
            {
                balance += amount;
                cout << "Amount Deposited Successfully.\n";
            }
            else
            {
                cout << "Invalid Amount.\n";
            }

            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance && amount > 0)
            {
                balance -= amount;
                cout << "Please Collect Your Cash.\n";
            }
            else
            {
                cout << "Insufficient Balance or Invalid Amount.\n";
            }

            break;

        case 4:
            cout << "Thank You for Using Our ATM.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}