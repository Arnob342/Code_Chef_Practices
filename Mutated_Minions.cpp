#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int count = 0;

        while(a--) {
            int x;
            cin >> x;
            if ((x + b) % 7 == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
