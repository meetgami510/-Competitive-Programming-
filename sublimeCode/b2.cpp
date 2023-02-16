#include<bits/stdc++.h>   
using namespace std;

void pline(long long i) {
    cout<<"Case #"<<i<<":"<<" ";
}

bool dfs(vector<vector<char>>& ans,int r,int c) {
    if(r<0 || c<0 || r>=ans.size() || c>=ans[0].size()) {
        return 0;
    } 
    if(ans[r][c]=='^'){
        return 1;
    }else{
        return 0;
    }
    int north = dfs(ans,r+1,c);
    int south = dfs(ans,r-1,c);
    int east = dfs(ans,r,c+1);
    int wast = dfs(ans,r,c-1);
    int result = north + south + east + wast;
    if(result >=2) {
        return true;
    }
    return false;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long t;
    cin>>t;
    long long i=1;

    while(t--) {
        pline(i++);
        // cout<<"\n";

        long long r,c;
        cin>>r>>c;
        vector<vector<char>> ans;
        int tep = 0,er = 0,point = 0;
        for(long long i=0;i<r;i++) {
            vector<char> ss;
            for(long long j=0;j<c;j++) {
                char a;
                cin>>a;
                if(a == '^'){
                    tep++;
                }
                if(a == '#') {
                    point++;
                }
                ss.push_back(a);
            }
            ans.push_back(ss);
        }
        if((r==1 || c==1) && tep!=0) {
            cout<<"Impossible"<<"\n";
        }else{

            if(point==ans.size() || point==ans[0].size()) {
                cout<<"Impossible"<<"\n";
            }
            else if(r==1 || c==1){
                cout<<"Possible\n";
                for(int i=0;i<r;i++) {
                    for(int j=0;j<c;j++) {
                        cout<<ans[i][j];
                    }
                    cout<<"\n";
                } 
            }
            else{
                for(int i=0;i<r;i++) {
                    for(int j=0;j<c;j++) {
                        if(ans[i][j] == '.') {
                            ans[i][j] = '^';
                        }
                    }
                } 
                bool fl = true;
                int count = 0;
                for(int i=0;i<r;i++) {
                    for(int j=0;j<c;j++) {
                        if(ans[i][j] == '#') {
                            continue;
                        }else if(dfs(ans,i,j) && ans[i][j]=='^'){
                            count++;
                        }else{
                            fl = false;
                            break;
                        }
                    }
                    if(!fl){
                        break;
                    }
                }
                for(int i=0;i<r;i++) {
                    for(int j=0;j<c;j++) {
                        if(ans[i][j] == '^'){
                            er++;
                        }
                    }
                }
                //cout<<count<<" "<<tep;
                if(fl && count==er){
                    cout<<"Possible\n";
                    for(int i=0;i<r;i++) {
                        for(int j=0;j<c;j++) {
                            cout<<ans[i][j];
                        }
                        cout<<"\n";
                    }                    
                }else{
                    cout<<"Impossible"<<"\n";
                }
            }

        }

    }   
    return 0;
}