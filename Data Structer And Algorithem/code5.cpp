#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> ans(n),nom(n);
        for(ll i=0;i<n;i++)
        {
            cin>>ans[i];
        }
        cout << int(min_element(ans.begin(), ans.end()) - ans.begin()) + 1 << " " << int(max_element(ans.begin(), ans.end()) - ans.begin()) + 1 << '\n';

    }
    return 0;
}