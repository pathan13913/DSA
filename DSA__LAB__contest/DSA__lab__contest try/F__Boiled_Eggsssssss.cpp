#include <bits/stdc++.h>
using namespace std;
struct Egg
{
    int n;
    int p;
    int q;
    int w[30];
};

int main()
{
    int t, p, q;
    cin >> t;
    Egg egg[t];

    for (int i = 0; i < t; i++)
    {
        cin >> egg[i].n >> egg[i].p >> egg[i].q;

        for (int j = 0; j < egg[i].n; j++)
        {
            cin >> egg[i].w[j];
        }
    }

    for (int i = 0; i < t; i++)
    {
        int count = 0;
        int we = 0;

        for (int j = 0; j < egg[i].p; j++)
        {
            we += egg[i].w[j];
            
            if (we <= egg[i].q)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout << "Case " << i + 1 << " : " << count << endl;
    }

    return 0;
}