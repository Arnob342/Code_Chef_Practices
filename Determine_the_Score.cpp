#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  

    for (int i = 0; i < t; i++) {
        int x, y;  
        cin >> x >> y;

        int z = (x / 10) * y;  
        cout << z << endl; 
    }

    return 0;
}
