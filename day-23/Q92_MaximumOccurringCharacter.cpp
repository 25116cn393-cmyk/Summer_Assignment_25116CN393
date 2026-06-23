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

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < 256; i++)
    {
        if (H[i] > maxFreq)
        {
            maxFreq = H[i];
            maxChar = i;
        }
    }

    cout << "Maximum Occurring Character: "
         << maxChar << endl;

    cout << "Frequency: "
         << maxFreq;

    return 0;
}