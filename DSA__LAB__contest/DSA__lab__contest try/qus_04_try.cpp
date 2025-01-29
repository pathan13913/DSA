#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int, int> laptop[n];
    for (int i = 0; i < n; i++)
    {
        cin >> laptop[i].first >> laptop[i].second;
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if (laptop[i].first < laptop[i + 1].first && laptop[i].second > laptop[i + 1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}