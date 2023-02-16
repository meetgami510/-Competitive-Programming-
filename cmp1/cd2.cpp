#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        int mod = 1e9 + 7;
        cin>>n;
        long long tem = 2;
        long long sum = 1;
        long long te = 2;
        //long long res = ((n*n)%mod)%mode;
        //cout<<res;
        int ct = 1;
        while(ct<=n) {
            //long long te = tem;
            for(int i=0;i<2;i++) {
                cout<<te<<" ";
                sum = sum + te;
                sum = sum%mod;
                te += tem;
                ct++;
            }
            //sum += 3*tem;
            tem++;
        }
        //cout<<sum;
        cout<<(2022*sum)%mod<<endl;
}
int main() {
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
}
