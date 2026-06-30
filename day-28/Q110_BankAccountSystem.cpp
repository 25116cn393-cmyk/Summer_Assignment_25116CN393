#include <iostream>
#include <string>
using namespace std;

int main()
{
    int accNo[50], balance[50];
    string name[50];
    int n = 0, choice, search, amount;

    do
    {
        cout << "\n----- BANK ACCOUNT SYSTEM -----";
        cout << "\n1. Create Account";
        cout << "\n2. Display Accounts";
        cout << "\n3. Deposit Money";
        cout << "\n4. Search Account";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Account Number: ";
            cin >> accNo[n];
            cin.ignore();

            cout << "Enter Account Holder Name: ";
            getline(cin, name[n]);

            cout << "Enter Initial Balance: ";
            cin >> balance[n];

            n++;
            cout << "Account Created Successfully!\n";
            break;

        case 2:
            cout << "\n--- Account Details ---\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\nAccount No : " << accNo[i];
                cout << "\nName       : " << name[i];
                cout << "\nBalance    : " << balance[i] << endl;
            }
            break;

        case 3:
            cout << "Enter Account Number: ";
            cin >> search;

            for (int i = 0; i < n; i++)
            {
                if (accNo[i] == search)
                {
                    cout << "Enter Amount: ";
                    cin >> amount;
                    balance[i] += amount;
                    cout << "Deposit Successful!\n";
                }
            }
            break;

        case 4:
            cout << "Enter Account Number: ";
            cin >> search;

            for (int i = 0; i < n; i++)
            {
                if (accNo[i] == search)
                {
                    cout << "\nAccount No : " << accNo[i];
                    cout << "\nName       : " << name[i];
                    cout << "\nBalance    : " << balance[i] << endl;
                }
            }
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}