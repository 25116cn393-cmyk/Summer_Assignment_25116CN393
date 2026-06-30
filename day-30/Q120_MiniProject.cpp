#include <iostream>
#include <string>
using namespace std;

int main()
{
    int rollNo[50], marks[50];
    string name[50];
    int n = 0, choice;

    do
    {
        cout << "\n===== MINI PROJECT =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Find Topper";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> rollNo[n];
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name[n]);

            cout << "Enter Marks: ";
            cin >> marks[n];

            n++;
            cout << "Record Added Successfully!\n";
            break;

        case 2:
            cout << "\n----- Student Records -----\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\nRoll No : " << rollNo[i];
                cout << "\nName    : " << name[i];
                cout << "\nMarks   : " << marks[i] << endl;
            }
            break;

        case 3:
            if (n == 0)
            {
                cout << "No Records Available!\n";
            }
            else
            {
                int max = 0;
                for (int i = 1; i < n; i++)
                {
                    if (marks[i] > marks[max])
                        max = i;
                }

                cout << "\n----- Topper Details -----";
                cout << "\nRoll No : " << rollNo[max];
                cout << "\nName    : " << name[max];
                cout << "\nMarks   : " << marks[max] << endl;
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