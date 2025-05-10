#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin>>a;
        bool x = true;

        if (a <= 1) {
            x = false;
        }
         else {
            for (int i = 2; i < a; i++) {
                if (a % i == 0) {
                    x = false;
                    break;
                }
            }
        }

        if (x)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}