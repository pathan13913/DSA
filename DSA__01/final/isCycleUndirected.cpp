#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<bool> visited(100, false);
stack<int> st;
vector<int> path;
vector<int> shortpath;
vector<int> color(100, -1);

int n, m;

bool isCycleUndirected(int u,int parent)
{
    visited[u] = true;

    for (auto it : adj[u])
    {
        if (!visited[it])
        {
            if (isCycleUndirected(it, u))
                return true;
        }
        else if (it!= parent)
            return true;
    }

    return false;
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    if (isCycleUndirected(0,0))
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle Detected" << endl;

    return 0;
}