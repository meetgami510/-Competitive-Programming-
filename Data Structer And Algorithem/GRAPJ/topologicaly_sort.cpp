#include<bits/stdc++.h>
using namespace std;

//Topologycal sort : Is only for Directed Acyclelic grap    
//                 : Linear increase of vertices such that of there is  an edge u -> v 
//                 : is appear before v in that ordering.
void findtoposort(int node,vector<int> adj[],stack<int> &st,vector<int> &vis)
{
    vis[node] = 1;
    for(auto it : adj[node])
    {
        if(!vis[it])
        {
            findtoposort(it,adj,st,vis);
        }
    }
    st.push(node);
}

vector<int> top_sort(vector<int> adj[],int n)
{
    stack<int> st;
    vector<int> vis(n,0);

    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            findtoposort(i,adj,st,vis);
        }
    }
    vector<int> temp;
    while(!st.empty())
    {
        temp.push_back(st.top());
        st.pop();
    }
    return temp;
}

int main()
{
    int node;
    cin>>node;

    vector<int> adj[node];
    for(int i=0;i<node;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int> ans;
    ans = top_sort(adj,node);
    for(int it : ans)
    {
        cout<<it<<" ";
    }
    return 0;
}