#include<bits/stdc++.h>
using namespace std;

void printgrap(vector<int> m[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int x:m[i])
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }

}

void bfs(vector<int> abj[],int v,int s)
{
    bool visited[v+1];

    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:abj[u])
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }
}

int main()
{
    int u,v,n;
    cin>>n;
    vector<int> G[n];
    for(int i=0;i<n;i++)
    {
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    printgrap(G,n);
    bfs(G,n,1);
    return 0;
}