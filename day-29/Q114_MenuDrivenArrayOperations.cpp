#include <iostream>
using namespace std;

int main()
{
    int arr[50], n = 0;
    int choice, value, pos, search;

    do
    {
        cout << "\n----- MENU DRIVEN ARRAY OPERATIONS -----";
        cout << "\n1. Insert Element";
        cout << "\n2. Display Array";
        cout << "\n3. Search Element";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Element: ";
            cin >> value;

            arr[n] = value;
            n++;

            cout << "Element Inserted Successfully!\n";
            break;

        case 2:
            cout << "\nArray Elements:\n";

            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";

            cout << endl;
            break;

        case 3:
            cout << "Enter Element to Search: ";
            cin >> search;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == search)
                {
                    cout << "Element Found at Position " << i + 1 << endl;
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