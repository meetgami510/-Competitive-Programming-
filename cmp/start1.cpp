#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(int x)
{
    ll y = x;
    for(int i=x-1;i >=1;i--)
    {
        y *= i;
        y %= 998244353;
    }
    return y;
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll mon;
        cin>>mon;

        if(mon%2==1)
        {
            cout<<0<<endl;
        }
        else{
            ll f = fact(mon/2);
            cout<<f*f%998244353<<endl;
        }
    }
}