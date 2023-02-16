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
        int ans = 16;
        for(int i=0;i<16;i++)
        {
            int nn = n + i;
            int count = i;
            while(n!=0 && n!=32768 && count < ans)
            {
                nn = nn * 2 % 32768;
                count++;
            }
        }
        cout<<ans<<endl;
    }
}