#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printgraph(vector<int> adj[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(auto x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;

    vector<int> adj[n+1];
    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        addedge(adj,u,v);
    }
    printgraph(adj,n);
    return 0;
}