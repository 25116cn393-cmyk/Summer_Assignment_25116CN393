#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book[50];
    int n = 0, choice;
    string search;

    do
    {
        cout << "\n----- MINI LIBRARY SYSTEM -----";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Enter Book Name: ";
            getline(cin, book[n]);
            n++;
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            cout << "\n----- Book List -----\n";
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << ". " << book[i] << endl;
            }
            break;

        case 3:
            cout << "Enter Book Name to Search: ";
            getline(cin, search);

            for (int i = 0; i < n; i++)
            {
                if (book[i] == search)
                {
                    cout << "Book Found: " << book[i] << endl;
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