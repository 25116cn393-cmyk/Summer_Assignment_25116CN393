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

    cout << "Transpose Matrix:\n";

    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}