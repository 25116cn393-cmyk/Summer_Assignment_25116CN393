#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;

    int H[256] = {0};

    for (char ch : str)
    {
        if (H[ch] == 0)
        {
            cout << ch;
            H[ch]++;
        }
    }

    return 0;
}