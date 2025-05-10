#include <iostream>
using namespace std;

int main() {
    int N, M, X, Y;
    cin >> N >> M; 
    cin >> X >> Y; 
    int total_treats = (N * X) + (M * Y); 
    cout << total_treats << endl; 
    return 0;
}
