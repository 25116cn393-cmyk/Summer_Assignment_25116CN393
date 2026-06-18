#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    set<int> s;

    for(int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(int x : s)
        cout << x << " ";

    return 0;
}