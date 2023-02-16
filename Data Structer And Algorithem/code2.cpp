#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while( t-- )
    {
        ll x,y;
        cin>>x>>y;

        if(y==0)
        {
            cout<<x+1<<endl;
        }
        else if(x==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<(2*y + x + 1)<<endl;
        }
    }
    return 0;
}