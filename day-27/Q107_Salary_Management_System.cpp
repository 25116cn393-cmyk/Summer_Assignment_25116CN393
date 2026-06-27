#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    double basicSalary;
    double bonus;
    double deduction;
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

        cout << "Enter Employee Name: ";
        getline(cin, emp[i].name);

        cout << "Enter Basic Salary: ";
        cin >> emp[i].basicSalary;

        cout << "Enter Bonus: ";
        cin >> emp[i].bonus;

        cout << "Enter Deduction: ";
        cin >> emp[i].deduction;
    }

    cout << "\n========== Salary Details ==========\n";

    for (int i = 0; i < n; i++)
    {
        double netSalary = emp[i].basicSalary + emp[i].bonus - emp[i].deduction;

        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID           : " << emp[i].id << endl;
        cout << "Name         : " << emp[i].name << endl;
        cout << "Basic Salary : Rs. " << emp[i].basicSalary << endl;
        cout << "Bonus        : Rs. " << emp[i].bonus << endl;
        cout << "Deduction    : Rs. " << emp[i].deduction << endl;
        cout << "Net Salary   : Rs. " << netSalary << endl;
    }

    return 0;
}