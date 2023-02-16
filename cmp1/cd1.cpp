#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}


void solve(){
    int len;
    cin>>len;
    vector<int> vect(len);  
    for(auto &val : vect)   cin>>val;
    for(auto val : vect)    cout<<val<<" ";
    unordered_map<int,bool> isI;
    for(int i=0 ; i*i<=len; i++) isI[i*i] = true;
    unordered_map<int,int> prev;
    prev[0] = 1;
    cout<<"\n";
    int ans = 0;
    for(int i=0 ; i<vect.size() ; i++){
        int val = vect[i];
        unordered_map<int,int> ump;
        int cnt = 0;
        for(auto v : isI){
            int num = val^v.first;
            if( prev.find(num)=prev.end() ){
                ump[num^val] = prev[num];
                cnt += prev[num];
            }
        }
        if( isI.find(val)!=isI.end() )  ump[val] += 1,cnt+=1;
        prev = ump;
        cout<<(i+1)-cnt<<"\n";
        ans += (i+1)-cnt;
    }
    cout<<ans<<"\n";
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
}
