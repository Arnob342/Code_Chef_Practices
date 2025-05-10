#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int total = a + b + c;
        int min_val = min(a, min(b, c));

        cout << total - min_val << endl;
    }

    return 0;
}
