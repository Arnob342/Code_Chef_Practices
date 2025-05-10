#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while (t--) {
        int a1, b1,a2,b2;
        cin >> a1 >> b1 >> a2 >> b2;
        int c = abs(a1-a2);//using abs becouse (1-3) = -2 but output show 2
        int d = abs(b1-b2);

        int ans = max(c,d);
        cout << ans << endl;
        
    }
    return 0;
}