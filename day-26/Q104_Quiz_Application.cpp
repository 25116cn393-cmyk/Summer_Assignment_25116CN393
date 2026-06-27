#include <iostream>
using namespace std;

int main()
{
    int answer;
    int score = 0;

    cout << "====== Simple Quiz ======\n";

    cout << "\nQ1. What is the capital of India?\n";
    cout << "1. Mumbai\n";
    cout << "2. Delhi\n";
    cout << "3. Kolkata\n";
    cout << "4. Chennai\n";
    cout << "Enter Answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ2. How many days are there in a week?\n";
    cout << "1. 5\n";
    cout << "2. 6\n";
    cout << "3. 7\n";
    cout << "4. 8\n";
    cout << "Enter Answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nQ3. Which language is used for C++ programming?\n";
    cout << "1. C++\n";
    cout << "2. HTML\n";
    cout << "3. CSS\n";
    cout << "4. SQL\n";
    cout << "Enter Answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\nQ4. 5 + 10 = ?\n";
    cout << "1. 12\n";
    cout << "2. 15\n";
    cout << "3. 20\n";
    cout << "4. 25\n";
    cout << "Enter Answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ5. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n";
    cout << "2. Venus\n";
    cout << "3. Mars\n";
    cout << "4. Jupiter\n";
    cout << "Enter Answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n=========================\n";
    cout << "Quiz Finished!\n";
    cout << "Your Score: " << score << " / 5\n";

    return 0;
}