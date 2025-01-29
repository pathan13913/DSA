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
        cout << "1 1" << endl;
        return 0;
    }
    else if (count >= n - 2)
    {
        cout << "yes" << endl;
        int indices[2];
        int indexCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] != arr2[i])
            {
                indices[indexCount++] = i + 1;
            }
        }
        for (int i = 0; i < 2; i++)
        {
            cout << indices[i];
            if (i < 1)            {
                cout << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
