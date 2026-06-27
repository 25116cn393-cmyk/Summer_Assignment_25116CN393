#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    double salary;
};

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> emp[i].id;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, emp[i].name);

        cout << "Enter Department: ";
        getline(cin, emp[i].department);

        cout << "Enter Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\n========== Employee Details ==========\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID         : " << emp[i].id << endl;
        cout << "Name       : " << emp[i].name << endl;
        cout << "Department : " << emp[i].department << endl;
        cout << "Salary     : Rs. " << emp[i].salary << endl;
    }

    return 0;
}