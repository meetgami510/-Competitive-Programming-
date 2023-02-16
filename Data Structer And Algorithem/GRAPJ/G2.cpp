#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector< vector<int> > G;
vector<int> vis;

// void dfs(int u)
// {
//     vis[u] = 1;
//     cout<<u<<endl;
//     for(int v: G[u])
//         if(!vis[v])
//             dfs(v);
// }

void bfs(int r)
{
    queue<int> q;
    q.push(r);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(vis[u])
            continue;
        vis[u] = 1;
        cout<<u<<endl;
        for(int v: G[u])
            if(!vis[v])
                q.push(v);
    }
}

int main()
{
    int n, m;
    cin>>n>>m;

    // Adjacency List
    G.resize(n+1);
    vis.resize(n+1); 
    // vis[i] = 0 => i is not visited
    // vis[i] = 1 => i is visited

    // Input format
    // u v
    for(int i = 0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    // dfs(1);
    bfs(1);

    return 0;
}

