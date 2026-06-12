#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return original == reverse;
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}