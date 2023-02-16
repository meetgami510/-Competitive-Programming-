#include<bits/stdc++.h>   
using namespace std;

void pline(long long i) {
    cout<<"Case #"<<i<<":"<<" ";
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

        long long n,k;
        cin>>n>>k;
        map<int,int> mp;
        vector<long long> ans(n);
        for(long long i=0;i<n;i++) {
            cin>>ans[i];
            mp[ans[i]]++;
        }
        bool flage = true;
        if(2*k<n){
            flage = false;
        }
        for(auto it : mp) {
            if(it.second > 2) {
                flage = false;
                break;
            }
        }
        if(flage) {
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}