#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a; 

    while (a--) {
        int x, y, z;
        cin >> x >> y >> z;  

        int b = x * y; 
        int c = (x - 1) / 3;  
        int d = c * z;  
        int total_time = b + d;

        cout << total_time << endl;
    }

    return 0;
}