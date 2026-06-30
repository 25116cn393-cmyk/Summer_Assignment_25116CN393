#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    int choice;

    cout << "Enter First String: ";
    getline(cin, str1);

    do
    {
        cout << "\n----- MENU DRIVEN STRING OPERATIONS -----";
        cout << "\n1. Display String";
        cout << "\n2. Find Length";
        cout << "\n3. Concatenate Strings";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "String: " << str1 << endl;
            break;

        case 2:
            cout << "Length = " << str1.length() << endl;
            break;

        case 3:
            cout << "Enter Second String: ";
            getline(cin, str2);

            cout << "Concatenated String: " << str1 + str2 << endl;
            break;

        case 4:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}