#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) { 
        int num;
        cin >> num; 

        if (num >= 67 && num <= 45000) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
