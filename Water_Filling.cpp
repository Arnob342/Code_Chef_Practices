#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if ((a == 0 && b == 0) || (a == 0 && c == 0) || (a == 0 && b == 0 && c == 0)) {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout<<"Not now"<<endl;
        }
    }
    return 0;
}