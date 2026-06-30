#include <iostream>
#include <string>
using namespace std;

int main()
{
    int empId[50], salary[50];
    string name[50];
    int n = 0, choice, searchId;

    do
    {
        cout << "\n----- MINI EMPLOYEE MANAGEMENT SYSTEM -----";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> empId[n];
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, name[n]);

            cout << "Enter Salary: ";
            cin >> salary[n];

            n++;
            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            cout << "\n----- Employee Details -----\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\nEmployee ID : " << empId[i];
                cout << "\nName        : " << name[i];
                cout << "\nSalary      : " << salary[i] << endl;
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (empId[i] == searchId)
                {
                    cout << "\nEmployee Found";
                    cout << "\nEmployee ID : " << empId[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nSalary      : " << salary[i] << endl;
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