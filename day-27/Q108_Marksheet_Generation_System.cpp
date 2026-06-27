#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int english;
    int maths;
    int science;
    int computer;
    int hindi;
};

int main()
{
    Student s;

    cout << "========== Marksheet Generation System ==========\n\n";

    cout << "Enter Roll Number : ";
    cin >> s.rollNo;

    cin.ignore();

    cout << "Enter Student Name : ";
    getline(cin, s.name);

    cout << "\nEnter Marks (Out of 100)\n";

    cout << "English : ";
    cin >> s.english;

    cout << "Mathematics : ";
    cin >> s.maths;

    cout << "Science : ";
    cin >> s.science;

    cout << "Computer : ";
    cin >> s.computer;

    cout << "Hindi : ";
    cin >> s.hindi;

    int total = s.english + s.maths + s.science + s.computer + s.hindi;
    float percentage = total / 5.0;

    string grade;

    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B";
    else if (percentage >= 60)
        grade = "C";
    else if (percentage >= 50)
        grade = "D";
    else
        grade = "F";

    cout << "\n\n================== MARKSHEET ==================\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Student Name: " << s.name << endl;

    cout << "\n-----------------------------------------------\n";
    cout << left << setw(15) << "Subject" << "Marks\n";
    cout << "-----------------------------------------------\n";

    cout << left << setw(15) << "English" << s.english << endl;
    cout << left << setw(15) << "Mathematics" << s.maths << endl;
    cout << left << setw(15) << "Science" << s.science << endl;
    cout << left << setw(15) << "Computer" << s.computer << endl;
    cout << left << setw(15) << "Hindi" << s.hindi << endl;

    cout << "-----------------------------------------------\n";

    cout << "Total Marks : " << total << " / 500" << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    if (percentage >= 40)
        cout << "Result      : PASS" << endl;
    else
        cout << "Result      : FAIL" << endl;

    cout << "===============================================\n";

    return 0;
}