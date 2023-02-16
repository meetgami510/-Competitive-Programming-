#include<bits/stdc++.h>   
#include<vector>
#include<utility>
#include<queue>
using namespace std;

using ll = int64_t;
//using pll pair<ll,ll>;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long t;
    cin>>t;
    int i=0;

    while(t--) {
        i++;
        // cout<<"\n";

        int r,c;
        cin>>r>>c;
        vector<vector<char>> ans;
        for(int i=0;i<r;i++) {
            vector<char> ss;
            for(int j=0;j<c;j++) {
                char a;
                cin>>a;
                ss.push_back(a);
            }
            ans.push_back(ss);
        }
        vector<vector<int>> de(r,vector<int>(c,0));
        vector<vector<vector<pair<ll,ll>>>> er(r,vector<vector<pair<ll,ll>>>(c,vector<pair<ll,ll>>{} ) );
        queue<pair<ll,ll>> pq;
        vector<int> dr{-1,0,1,0};
        vector<int> dc{0,1,0,1};

        for(int i = 0;i<r;i++) {
            for(int j=0;j<c;j++) {
                for(long long k=0;k<4;k++) {
                    ll rr = i + dr[k];
                    ll cc = j + dc[k];
                    if(0<=rr && rr<r && 0<=cc && cc<=c && ans[rr][cc]!='#') {
                        de[i][j]++;
                        er[i][j].push_back(make_pair(rr,cc));
                    }
                }
                if(de[i][j]<=1) {
                    pq.push(make_pair(i,j));
                }
            }
        }
        bool flage = true;
        vector<vector<int>> temp(r,vector<int>(c,false));
        // int i,j;
        while(!pq.empty()) {
            auto [i,j] = pq.front();
            pq.pop();
            assert(0<=i && i<r && 0<=j && j<c);
            if(temp[i][j]){
                continue;
            }
            if(ans[i][j]=='^'){
                flage = false;
            }
            temp[i][j] =true;
            for(auto [rr,cc] : er[i][j]) {
                de[rr][cc]--;
                if(de[rr][cc]<=1){
                    pq.push(make_pair(rr,cc));
                }
            }
        }
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                if(ans[i][j]=='.' && !temp[i][j]) {
                    ans[i][j] = '^';
                }
            }
        }
        if(!flage) {
            cout<<"Case #"<<i<<": Impossible"<<endl;
        }else{
            cout<<"Case #"<<i<<": Possible"<<endl;
            for(long long i=0;i<r;i++) {
                for(long long j=0;j<c;j++) {
                    cout<<ans[i][j];
                }
                cout<<"\n";
            }
        }
    }
   
    return 0;
}