#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string str;
    cout << "Enter Sentence: ";
    getline(cin, str);

    stringstream ss(str);

    string word;
    string longest = "";

    while (ss >> word)
    {
        if (word.length() > longest.length())
            longest = word;
    }

    cout << "Longest Word: "
         << longest;

    return 0;
}