#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    sort(arr2, arr2 + n);

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[i])
            count++;
    }

    if (count == n)
    {
        cout << "yes" << endl;
        cout << "1 1"<<endl;
        return 0;
    }
    else if (count >= n - 2)
    {
        cout << "yes" << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] != arr2[i])
            {
                cout << i + 1 << " ";
            }
        }
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}