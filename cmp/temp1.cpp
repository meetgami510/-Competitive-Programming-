//we given one list,two numebr is given . we need to check 

#include<bits/stdc++.h>   
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
    }
    int a,b;
    cin>>a>>b;
    
    bool flage;
    if(a>b)
    {
        for(int i=b+1;i<a;i++)
        {
            flage = false;
            for(int j=0;j<n;j++)
            {
                if(ans[j]==i && ans[j]!=a && ans[j]!=b)
                {
                    flage = true;
                    break;
                }
            }
            if(flage == false)
            {
                cout<<i<<" ";
            }
        }
    }
    else if(b>a)
    {
        
        for(int i=a+1;i<b;i++)
        {
            flage = false;
            for(int j=0;j<n;j++)
            {
                if(ans[j]==i && ans[j]!=a && ans[j]!=b)
                {
                    flage = true;
                    break;
                }
            }
            if(flage == false)
            {
                cout<<i<<" ";
            }
        }
    }
    else{
        cout<<0<<endl;
    } 
}