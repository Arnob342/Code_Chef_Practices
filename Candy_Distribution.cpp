#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        // Ensure a is exactly divisible by b
        if (a % b != 0) {
            cout << "No" << endl;
        } else {
            int d = a / b;
            if (d % 2 == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
