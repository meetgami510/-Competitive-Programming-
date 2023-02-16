#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>ans[i];
        }
        sort(ans.begin(),ans.end());
        if(n==1)
        {
            if(ans[0]>1)
            {
                no;
            }
            else
            {
                yes;
            }
        }
        else if(ans[n-1]-ans[n-2] > 1)
        {
            no;
        }
        else
        {
            yes;
        }
    }
    return 0;
}