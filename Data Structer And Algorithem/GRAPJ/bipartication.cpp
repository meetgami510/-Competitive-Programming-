#include<bits/stdc++.h>
using namespace std;

bool bipatite_bfs(int src,vector<int> adj[],int color[])
{
    queue<int> q;
    q.push(src);
    color[src] = 1;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto it : adj[node])
        {
            if(color[it] == -1)
            {
                color[it] = 1 - color[node];
                q.push(it);
            }
            else if(color[it] ==color[node]){
                    return false;   
            }
        }
    }
    return true;
}

bool checkbipatite(vector<int> adj[],int n)
{
    int color[n];
    memset(color,-1,sizeof color);
    for(int i=0;i<n;i++)
    {
        if(color[i] == -1)
        {
            if(!bipatite_bfs(i,adj,color))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int node,edge;
    cin>>node>>edge;

    vector<int> adj[node];
    for(int i=0;i<node;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(checkbipatite(adj,node))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
