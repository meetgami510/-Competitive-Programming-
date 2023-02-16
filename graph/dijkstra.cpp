#include<bits/stdc++.h>   
using namespace std;


int main() {
    int node,edges,sor;

    cin>>node>>edges;

    vector<pair<int,int>> g[node+1];
    //for 1 based indexing

    int a,b,wt;

    for(int i=0;i<edges;i++) {
        cin>>a>>b>>wt;

        g[a].push_back({b,wt});
        g[b].push_back({a,wt});
    }
    cin>>sor;
//making min-Heap data strucure:
    priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>> > pq; 
    vector<int> distTo(node+1,INT_MAX);
    distTo[sor] = 0;

    pq.push({0,sor});

    while( ! pq.empty()) {
        int dis = pq.top().first;
        int prev = pq.top().second;

        vector<pair<int,int>>:: iterator it;
        //start with adjecent_list with 0 or 1.
        for(it = g[prev].begin();it != g[prev].end();it++) {
            //
            int next = it->first;
            int dist_curr = it->second;
            //
            if(distTo[next] > distTo[prev] + dist_curr) {
                distTo[next] = distTo[prev] + dist_curr;
                pq.push({distTo[next],next});
            }
        }
    }

    for(int i=0;i<node;i++) {
        cout<<distTo[i]<<" ";
    }
    return 0;
}