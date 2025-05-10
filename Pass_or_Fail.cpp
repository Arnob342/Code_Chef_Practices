#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int d = (b*3)-(a-b);
        if(d>=c) 
        {
            cout<<"PASS"<<endl;
        }
        else 
        {
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}