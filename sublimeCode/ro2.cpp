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
    long long i = 1;


    while(t--) {
        pline(i++);
        long long n,k;
        cin>>n>>k;

        vector<long long> a(n),b(n);
        for(long long i=0;i<n;i++) {
            cin>>a[i];
        }
        for(long long i=0;i<n;i++) {
            cin>>b[i];
        }
        if(k == 0) {
            if(a == b) {
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }else{
            long long tem = b[0];
            long long ind;
            for(long long i=0;i<n;i++) {
                if(tem == a[i]) {
                    ind = i;
                    break;
                }
            }
            if(k<=n) {
                vector<long long> res(n);
                long long re = 0;
                for(long long i = ind;i<n;i++) {
                    res[re] = a[i];
                    re++;
                }
                int te = n - re;
                for(long long i=0;i<ind;i++) {
                    res[re] = a[i];
                    re++;
                }
                if(a == b) {
                    cout<<"NO"<<"\n";
                }
                else if(res == b) {
                    cout<<"YES"<<"\n";
                }else{
                    cout<<"NO"<<"\n";
                }
            }else{
                cout<<"NO"<<"\n";
            }

        }
        
    }
    return 0;
}