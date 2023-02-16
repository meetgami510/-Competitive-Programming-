#include<bits/stdc++.h>   
using namespace std;


void findtopodfs(int node,vector<int> &vis,stack<int> &st,vector<int> graph[]) {
    vis[node] = 1;
    for(auto it : graph[node]) {
        if(vis[it] == 0){
            findtopodfs(it,vis,st,graph);
        }
    }
    st.push(node);
}
vector<int> toposort(int node,vector<int> graph[]) {
    stack<int> st;

    vector<int> vis(node,0);

    for(int i=0;i<node;i++) {
        if(vis[i] == 0) {
            findtopodfs(i,vis,st,graph);
        }
    }

    vector<int> ans;

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
// int check(int node,vector<int>& ans,vector<int> graph[]) {
//     vector<int> amp(node,-1);

//     for(int i=0;i<node,i++) {

//     }
// }

int main() {
    int node,edge;
    cin>>node>>edge;

    vector<int> graph[node];
    int u , v;
    for(int i=0;i<edge;i++) {
        cin>>u>>v;

        graph[u].push_back(v);

    } 
    vector<int> ans = toposort(node,graph);

    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    // cout << check(node,ans,graph);
}