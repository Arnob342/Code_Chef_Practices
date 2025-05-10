#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        if (A - Y <= B && B <= A + X) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}