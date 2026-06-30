#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id[50], quantity[50];
    string item[50];
    int n = 0, choice, searchId;

    do
    {
        cout << "\n----- INVENTORY MANAGEMENT SYSTEM -----";
        cout << "\n1. Add Item";
        cout << "\n2. Display Items";
        cout << "\n3. Search Item";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Item ID: ";
            cin >> id[n];
            cin.ignore();

            cout << "Enter Item Name: ";
            getline(cin, item[n]);

            cout << "Enter Quantity: ";
            cin >> quantity[n];

            n++;
            cout << "Item Added Successfully!\n";
            break;

        case 2:
            cout << "\n--- Inventory List ---\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\nItem ID   : " << id[i];
                cout << "\nItem Name : " << item[i];
                cout << "\nQuantity  : " << quantity[i] << endl;
            }
            break;

        case 3:
            cout << "Enter Item ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    cout << "\nItem ID   : " << id[i];
                    cout << "\nItem Name : " << item[i];
                    cout << "\nQuantity  : " << quantity[i] << endl;
                    break;
                }
            }
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