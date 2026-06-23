#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;

    int count = 1;

    for (int i = 0; i < str.length(); i++)
    {
        count = 1;

        while (i < str.length() - 1 &&
               str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << str[i] << count;
    }

    return 0;
}