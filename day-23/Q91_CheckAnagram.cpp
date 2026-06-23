#include <iostream>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter First String: ";
    cin >> s1;

    cout << "Enter Second String: ";
    cin >> s2;

    if (s1.length() != s2.length())
    {
        cout << "Not Anagrams";
        return 0;
    }

    int H[256] = {0};

    for (char ch : s1)
        H[ch]++;

    for (char ch : s2)
        H[ch]--;

    for (int i = 0; i < 256; i++)
    {
        if (H[i] != 0)
        {
            cout << "Not Anagrams";
            return 0;
        }
    }

    cout << "Anagrams";
    return 0;
}