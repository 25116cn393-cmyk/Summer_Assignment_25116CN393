#include <iostream>
#include <string>
using namespace std;

int main()
{
    int rollNo[50], marks[50];
    string name[50];
    int n = 0, choice, searchRoll;

    do
    {
        cout << "\n----- STUDENT RECORD SYSTEM -----";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> rollNo[n];
            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name[n]);

            cout << "Enter Marks: ";
            cin >> marks[n];

            n++;
            cout << "Student Record Added Successfully!\n";
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
            cout << "Enter Roll Number to Search: ";
            cin >> searchRoll;

            for (int i = 0; i < n; i++)
            {
                if (rollNo[i] == searchRoll)
                {
                    cout << "\nStudent Found";
                    cout << "\nRoll No : " << rollNo[i];
                    cout << "\nName    : " << name[i];
                    cout << "\nMarks   : " << marks[i] << endl;
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