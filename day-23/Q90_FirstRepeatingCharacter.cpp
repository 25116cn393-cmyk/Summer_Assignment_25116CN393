#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);

    int H[256] = {0};

    for (char ch : str)
        H[ch]++;

    for (char ch : str)
    {
        if (H[ch] > 1)
        {
            cout << "First Repeating Character: " << ch;
            return 0;
        }
    }

    cout << "No Repeating Character Found";
    return 0;
}