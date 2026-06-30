#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[50], phone[50];
    int n = 0, choice;
    string search;

    do
    {
        cout << "\n----- CONTACT MANAGEMENT SYSTEM -----";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Enter Name: ";
            getline(cin, name[n]);

            cout << "Enter Phone Number: ";
            getline(cin, phone[n]);

            n++;
            cout << "Contact Added Successfully!\n";
            break;

        case 2:
            cout << "\n--- Contact List ---\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\nName  : " << name[i];
                cout << "\nPhone : " << phone[i] << endl;
            }
            break;

        case 3:
            cout << "Enter Name to Search: ";
            getline(cin, search);

            for (int i = 0; i < n; i++)
            {
                if (name[i] == search)
                {
                    cout << "\nName  : " << name[i];
                    cout << "\nPhone : " << phone[i] << endl;
                }
            }
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}