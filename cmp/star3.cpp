#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll len;
    cin>>len;
    ll temp=0,max;
    vector<int> vm(len);
    for(int i=0;i<len;i++)
    {
        cin>>vm[i];
    }
    for(int i=0;i<len-1;i++)
    {
        int y = vm[i]*vm[i+1];
        if(temp < y)
        {
            temp = y;
            max=i;
        }
    }
    if(max==1)
    {
        cout<<len<<" "<<0<<endl;
    }
    else if(max==0)
    {
        cout<<0<<" "<<len-2<<endl;
    }
    else{
        cout<<max<<" "<<len-(max+1)<<endl;
    }
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}