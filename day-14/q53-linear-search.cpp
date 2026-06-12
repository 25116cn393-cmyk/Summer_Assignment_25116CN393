#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int position = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            position = i;
            break;
        }
    }

    if(position != -1)
        cout << "Element found at index " << position;
    else
        cout << "Element not found";

    return 0;
}