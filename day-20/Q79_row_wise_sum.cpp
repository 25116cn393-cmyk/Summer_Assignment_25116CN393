#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[r][c];

    cout << "Enter matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Row-wise Sum:\n";

    for(int i = 0; i < r; i++) {
        int sum = 0;

        for(int j = 0; j < c; j++)
            sum += A[i][j];

        cout << "Row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}