#include<bits/stdc++.h> 
using namespace std;

int longestContinuousSubstring(string s) {
    long long ans =0;
    long long count = 0;
    if(s.length() == 1) {
        return s.length();
    }
    for(int i=1;i<s.length();i++) {
        //cout<<s[i]-s[i-1]<<" ";
        if(s[i]==s[i-1]) {
            continue;
        }
        if(s[i]-s[i-1] == 1) {
            count++;
        }
        else{
            cout<<count<<" ";
            ans = max(ans,count);
            count = 0;
        }
    }
    return count+1==s.length() ? s.length() : ans+1;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s;
    cin>>s;
    cout<<longestContinuousSubstring(s);
    return 0;
}