#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll m;
        cin>>m;
        string ss;
        cin>>ss;
        ll ans=0;
        for(int i=0;i<m-2;i++)
        {
            if(ss[i]=='0' && ss[i+1]=='1' && ss[i+2]=='0')
            {
                ans+=1;
            }
        }
        for(int i=0;i<m-1;i++)
        {
            if(ss[i]=='0' && ss[i+1]=='0')
            {
                ans+=2;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}