#include<bits/stdc++.h>
using namespace std;
// bfs of graph:
vector<int> bfsofgraph(int n,vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(n+1,0);

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i]=1;
            while(!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it : adj[node])
                {
                    if(!vis[it])
                    {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    return bfs;

}

//DFS of graph :

void dfs(int node,vector<int> &visi,vector<int> adj[],vector<int> &storedfs)
{
    storedfs.push_back(node);
    visi[node]=1;

    for(auto it: adj[node] )
    {
        if(!visi[it])
        {
            dfs(it,visi,adj,storedfs);
        }
    }
}
vector<int> dfsofgraph(int n,vector<int> adj[])
{
    vector<int> storedfs;
    vector<int> visi(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(!visi[i])
        {
            dfs(n,visi,adj,storedfs);
        }
    }
    return storedfs;
}

//using bfs check graph is cyclelic or not :

bool checkcycle(int node,int n,vector<int> adj[],vector<int> &visit)
{
    queue<pair<int,int>> qu;
    visit[node]=true;
    qu.push({node,-1});

    while(!qu.empty())
    {
        int nu = qu.front().first;
        int par = qu.front().second;
        qu.pop();

        for(auto it : adj[nu])
        {
            if(!visit[it])
            {
                visit[it]=true;
                qu.push({it,nu});

            }
            else if(par != it)
            {
                return true;
            }
        }
    }
    return false;

}
bool iscycle(int n,vector<int> adj[])
{
    vector<int> visit(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(!visit[i])
        {
            if(checkcycle(i,n,adj,visit))
            {
                return true;
            }
        }
    }
    return false;
}


bool cycle_check(int node,int parents,vector<int> &vis,vector<int> adj[])
{
    vis[node] = 1;
    for(auto it : adj[node])
    {
        if(0 == vis[it])
        {
            if(cycle_check(it,node,vis,adj))
            {
                return true;
            }
        }
        else if(it != parents)
        {
            return true;
        }
    }
    return false;

}
bool is_using_dfs_cycle(int n,vector<int> adj[])
{
    vector<int> vi(n+1,0);
    for(auto it : adj[n])
    {
        if(!vi[it])
        {
            if(cycle_check(n,-1,vi,adj))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,m;
    cout<<"Enter the number of eges :";
    cin>>n;
    cout<<"Enter the number of node :";
    cin>>m;

    vector<int> adj[n];
    // vector<pair<int,int>> adj1[n];

    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<i<<"---"<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }

    // for wigthed graph :

    // for(int i=0;i<n;i++)
    // {
    //     int u,v,w;
    //     cin>>u>>v>>w;

    //     adj1[u].push_back({v,w});
    //     adj1[v].push_back({u,w});
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<i<<"---";
    //     for(int j=0;j<adj1[i].size();j++)
    //     {
    //         cout<<adj1[i][j].first<<"w--"<<adj1[i][j].second<<" ";
    //     }
    //     cout<<"\n";
    // }

    cout<<"\n\nBFS Treversale :";
    // I need to pass number of node in graph for bfs.
    vector<int> ans = bfsofgraph(m,adj);
    for(auto it : ans)
    {
        cout<<it<<" ";
    }

    cout<<"\n\nDFS Traversale :";
    vector<int> ans1=dfsofgraph(m,adj);
    for(auto it: ans1)
    {
        cout<<it<<" ";
    }

    cout<<"\n\ncheck for cyclice Greaph :";
    if(iscycle(m,adj))
    {
        cout<<"YES-cyclelic";
    }
    else{
        cout<<"NO-Cycle";
    }

    if(is_using_dfs_cycle(m,adj))
    {
        cout<<"YES-Cyclelic";
    }
    else
    {
        cout<<"NO-Cycle";
    }
    return 0;
}
