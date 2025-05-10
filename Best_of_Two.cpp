#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], b[3];

        for (int i = 0; i < 3; i++)
            cin >> a[i]; // Alice's numbers

        for (int i = 0; i < 3; i++)
            cin >> b[i]; // Bob's numbers

        sort(a, a + 3);
        sort(b, b + 3);

        int x = a[1] + a[2]; // Alice's score
        int y = b[1] + b[2]; // Bob's score

        if (x > y)
            cout << "Alice" << endl;
        else if (y > x)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }

    return 0;
}
