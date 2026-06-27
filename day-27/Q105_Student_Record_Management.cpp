#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> students[i].rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, students[i].name);

        cout << "Enter Marks: ";
        cin >> students[i].marks;
    }

    cout << "\n========== Student Records ==========\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << students[i].rollNo << endl;
        cout << "Name    : " << students[i].name << endl;
        cout << "Marks   : " << students[i].marks << endl;
    }

    return 0;
}