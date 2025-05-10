#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S;

        if (max({P, Q, R, S}) > (P + Q + R + S) / 2) {
            cout << "YES"<< endl;
        } else {
            cout << "NO"<< endl;
        }
    }
    return 0;
}
