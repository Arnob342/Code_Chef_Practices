#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        if (n == 1 || n == 3 || n == 5 || n == 7 || n == 9) {
            cout << "Lower Double" << endl;
        } 
        else if (n == 2 || n == 4 || n == 6 || n == 8 || n == 10) {
            cout << "Lower Double" << endl;
        } 
        else if (n == 11 || n == 12 || n == 13 || n == 14 || n == 15) {
            cout << "Lower Single" << endl;
        } 
        else if (n == 16 || n == 18 || n == 20 || n == 22 || n == 24) {
            cout << "Upper Double" << endl;
        } 
        else if (n==17 ||n ==19||n == 21 || n == 23 || n == 25) {
            cout << "Upper Double" << endl;
        } 
        else if (n == 26 || n == 27 || n == 28 || n == 29 || n == 30) {
            cout << "Upper Single" << endl;
        } 
        else {
            cout << "Invalid Number" << endl;
        }
    }

    return 0;
}