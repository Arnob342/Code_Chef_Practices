#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x >= 67 && x <= 45000) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

        int z = (x + y) + 1;
        cout << z << endl;
    }

    return 0;
}