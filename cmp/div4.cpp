#include<bits/stdc++.h>   
using namespace std;

#define read(type) readInt<type>()
#define ll long long
#define vi vector<int>
#define nL
#define pb push_back
#define mk make_pair
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define pii pair<int, int>
#define a first
#define b second
// #define int long long


int main()
{
    int tc; 
    cin >> tc;

    while(tc--) {
        long long n;
        cin>>n;

        long long ans;
        string s;
        cin>>s;
        vector<long long> resu(n);
        long long u=0;
        long long an = 0;
        long long ym = 0;

        for(long long i=0;i<n;i++) {
            if(s[i] == 'R') {
                ym += (n-1-i);
            }else{
                ym += i;
            }
        }
        for(long long i=0;i<n/2;i++) {
            if(s[i] == 'L') {
                s[i] = 'R';
                ym += (n-1-i);
                ym -= i;
                resu[u++] = ym;
            }
            //s[i] = 'L';
            if(s[n-i-1] == 'R') {
                s[n-i-1] = 'L';
                ym -= i;
                ym += (n-1-i);
                resu[u++] = ym;
            }
            //s[i] = 'R';
        }
        long long yo = 0;
        for(long long i=0;i<n;i++) {
            if(s[i] == 'R') {
                yo += (n-1-i);
            }else{
                yo = ((long long)yo + i); 
            }
        }
        for(long long i=0;i<n;i++) {
            if(resu[i] == 0) {
                resu[i] = yo;
            }
        }
        for(long long i=0;i<resu.size();i++) {
            cout<<resu[i]<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}