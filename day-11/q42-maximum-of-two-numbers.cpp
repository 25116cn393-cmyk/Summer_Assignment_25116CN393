#include <iostream>
using namespace std;

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Maximum = " << maximum(a, b);

    return 0;
}