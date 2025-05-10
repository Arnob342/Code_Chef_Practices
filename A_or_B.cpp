#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, d, e, x;
        cin >> a >> b;
        e=500-2*a +1000-4*(a+b);
        d=500-2*(a+b) +1000-4*b;
        x=max(e,d);
        cout << x << endl;
    }
    return 0;
}