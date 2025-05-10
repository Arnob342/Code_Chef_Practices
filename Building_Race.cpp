#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (c == d) {
            cout << "Both" << endl;
        } else if (c > d) {
            cout << "Chef" << endl;
        } else {
            cout << "Chefina" << endl;
        }
    }
    return 0;
}