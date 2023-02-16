#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll len1;
        cin>>len1;

        vector<int> ans(len1),an1(len1);
        for(int i=0;i<len1;i++)
        {
            cin>>ans[i];
        }
        for(int i=0;i<len1;i++)
        {
            cin>>an1[i];
        }
        //cout<<abs(ans[0]-ans[len1-1]+an1[0]-an1[len1-1])<<endl;
        ll sum=0;
        for(int i=0;i<len1-1;i++)
        {
            sum += min(abs(ans[i+1]-ans[i])+abs(an1[i+1]-an1[i]),abs(ans[i+1]-an1[i])+abs(an1[i+1]-ans[i])); 
        }
        cout<<sum<<endl;
    }
}