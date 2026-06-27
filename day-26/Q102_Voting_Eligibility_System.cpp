#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "===== Voting Eligibility System =====\n";

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "\n----- Result -----\n";

    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;

    if (age >= 18)
        cout << "Status : Eligible to Vote";
    else
        cout << "Status : Not Eligible to Vote";

    return 0;
}