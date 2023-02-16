#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        int len;
        cin>>len;

        vector<int> ans(len);
        map<ll,ll> mp;
        for(int i=0;i<len;i++)
        {
            cin>>ans[i];
            mp[ans[i]]++;
        }
        ll ele=-1e18,freq=-1e18;
        for(auto it: mp)
        {
            if(it.second <= freq)
            {
                continue;
            }
            ele = it.first;
            freq = it.second;
        }
        ll req = len - freq;
        ll ans1 = 0;
        while(req > 0)
        {
            ans1++;
            if(freq < req)
            {
                req -= freq;
                ans1 += freq;
                freq *= 2;
            }
            else{
                ans1 += req;
                break;
            }
        }
        cout<<ans1<<endl;
    
    }
    return 0;
}