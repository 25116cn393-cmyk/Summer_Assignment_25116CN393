#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

// Function Prototypes
void addBook(string title[], string author[], int id[], int &count);
void displayBooks(string title[], string author[], int id[], int count);
void searchBook(string title[], string author[], int id[], int count);
void issueBook(string title[], bool issued[], int count);
void returnBook(string title[], bool issued[], int count);

int main()
{
    string title[MAX];
    string author[MAX];
    int id[MAX];
    bool issued[MAX] = {false};

    int count = 0;
    int choice;

    do
    {
        cout << "\n==============================";
        cout << "\n LIBRARY MANAGEMENT SYSTEM";
        cout << "\n==============================";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice)
        {
        case 1:
            addBook(title, author, id, count);
            break;

        case 2:
            displayBooks(title, author, id, count);
            break;

        case 3:
            searchBook(title, author, id, count);
            break;

        case 4:
            issueBook(title, issued, count);
            break;

        case 5:
            returnBook(title, issued, count);
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}

void addBook(string title[], string author[], int id[], int &count)
{
    if (count == MAX)
    {
        cout << "\nLibrary Full!\n";
        return;
    }

    cout << "\nEnter Book ID: ";
    cin >> id[count];
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title[count]);

    cout << "Enter Author Name: ";
    getline(cin, author[count]);

    count++;

    cout << "\nBook Added Successfully.\n";
}

void displayBooks(string title[], string author[], int id[], int count)
{
    if (count == 0)
    {
        cout << "\nNo Books Available.\n";
        return;
    }

    cout << "\n========== BOOK LIST ==========\n";

    for (int i = 0; i < count; i++)
    {
        cout << "\nBook " << i + 1;
        cout << "\nID     : " << id[i];
        cout << "\nTitle  : " << title[i];
        cout << "\nAuthor : " << author[i];
        cout << "\n-------------------------";
    }
}

void searchBook(string title[], string author[], int id[], int count)
{
    if (count == 0)
    {
        cout << "\nLibrary Empty.\n";
        return;
    }

    string search;

    cout << "\nEnter Book Title: ";
    getline(cin, search);

    for (int i = 0; i < count; i++)
    {
        if (title[i] == search)
        {
            cout << "\nBook Found!\n";
            cout << "ID     : " << id[i] << endl;
            cout << "Title  : " << title[i] << endl;
            cout << "Author : " << author[i] << endl;
            return;
        }
    }

    cout << "\nBook Not Found.\n";
}

void issueBook(string title[], bool issued[], int count)
{
    if (count == 0)
    {
        cout << "\nLibrary Empty.\n";
        return;
    }

    string search;

    cout << "\nEnter Book Title: ";
    getline(cin, search);

    for (int i = 0; i < count; i++)
    {
        if (title[i] == search)
        {
            if (!issued[i])
            {
                issued[i] = true;
                cout << "\nBook Issued Successfully.\n";
            }
            else
            {
                cout << "\nBook Already Issued.\n";
            }
            return;
        }
    }

    cout << "\nBook Not Found.\n";
}

void returnBook(string title[], bool issued[], int count)
{
    if (count == 0)
    {
        cout << "\nLibrary Empty.\n";
        return;
    }

    string search;

    cout << "\nEnter Book Title: ";
    getline(cin, search);

    for (int i = 0; i < count; i++)
    {
        if (title[i] == search)
        {
            if (issued[i])
            {
                issued[i] = false;
                cout << "\nBook Returned Successfully.\n";
            }
            else
            {
                cout << "\nBook Was Not Issued.\n";
            }
            return;
        }
    }

    cout << "\nBook Not Found.\n";
}