#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int result = 0;
    cout<<setprecision(6);
    cout << fixed;

    for (int i = 0; i < t; i++)
    {

        double l, n, c;
        cin >> l >> n >> c;
        double expendLast = l / 2;

        double newLength ;
        while (newLength - l > 0.000001)
        {
            l = (1 + n * c) * l;
        }

        cout << "Case " << i+1 << ": " << newLength;
    }

    return 0;
}