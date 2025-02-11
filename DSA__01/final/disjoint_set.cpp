#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int size[1000];

void make_set(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find_set(parent[v]); // path compression
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}
int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        make_set(i);

    while (k--)
    {
        int a, b;
        cin >> a >> b;
        union_set(a, b);
    }

    int component = 0;

    for (int i = 0; i < n; i++)
    {
        if (parent[i] == i) // if (find_set(i) == i)
            component++;
    }

    return 0;
}