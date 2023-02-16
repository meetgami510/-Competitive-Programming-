#include<bits/stdc++.h>   
using namespace std;

void pline(long long i) {
    cout<<"Case #"<<i<<":"<<" ";
}

int main() {
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
        set<vector<int>> up;
        vector<vector<int>> tes;
        while(true) {
            vector<int> tem;
            bool flage = true;
            for(auto &it : mp) {
                if(mp[it.first]) {
                    // cout<<it.first<<" ";
                    tem.push_back(it.first);
                    mp[it.first]--;
                    flage = false;
                }
                if(tem.size() == k) {
                    break;
                }
            }
            // for(int i=0;i<tem.size();i++) {
            //     cout<<tem[i]<<" ";
            // }
            // cout<<"\n";
            if(flage) {
                break;
            }
            up.insert(tem);
            tes.push_back(tem);
        }
        // cout<<up.size();
        if(up.size() <= k && tes.size() == up.size()) {
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}