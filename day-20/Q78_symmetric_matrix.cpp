#include <iostream>
using namespace std;

int main() {
    int n;
    bool symmetric = true;

    cout << "Enter order of matrix: ";
    cin >> n;

    int A[n][n];

    cout << "Enter matrix:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Matrix is Symmetric";
    else
        cout << "Matrix is Not Symmetric";

    return 0;
}