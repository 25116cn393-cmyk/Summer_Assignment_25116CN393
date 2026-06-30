#include <iostream>
#include <string>
using namespace std;

int main()
{
    int seatNo[50];
    string name[50];
    int n = 0, choice, search;

    do
    {
        cout << "\n----- TICKET BOOKING SYSTEM -----";
        cout << "\n1. Book Ticket";
        cout << "\n2. Display Bookings";
        cout << "\n3. Search Booking";
        cout << "\n4. Cancel Booking";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Seat Number: ";
            cin >> seatNo[n];
            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, name[n]);

            n++;
            cout << "Ticket Booked Successfully!\n";
            break;

        case 2:
            cout << "\n--- Booking Details ---\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\nSeat Number : " << seatNo[i];
                cout << "\nPassenger   : " << name[i] << endl;
            }
            break;

        case 3:
            cout << "Enter Seat Number: ";
            cin >> search;

            for (int i = 0; i < n; i++)
            {
                if (seatNo[i] == search)
                {
                    cout << "\nSeat Number : " << seatNo[i];
                    cout << "\nPassenger   : " << name[i] << endl;
                }
            }
            break;

        case 4:
            cout << "Enter Seat Number to Cancel: ";
            cin >> search;

            for (int i = 0; i < n; i++)
            {
                if (seatNo[i] == search)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        seatNo[j] = seatNo[j + 1];
                        name[j] = name[j + 1];
                    }

                    n--;
                    cout << "Booking Cancelled Successfully!\n";
                    break;
                }
            }
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}