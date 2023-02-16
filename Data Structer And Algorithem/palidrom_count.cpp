#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string l)
{
    string o=l;
    reverse(l.begin(),l.end());
    if(o==l)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ll n,m,count=0;
    cin>>n;
    string s,q;
    cin>>s;
    cin>>m;
    vector<int> arr;

    for(int i=0;i<m;i++)
    {
        ll val;
        cin>>val;
        arr.push_back(val);
    }

    int i=0;
    for(int j=0;j<n;j++)
    {
        q=s;
        if(i<m)
        {
            q=q.substr(j,arr[i]);
        }
        else
        {
            break;
        }
        bool temp=check(q);
        if(temp==true)
        {
            count++;
        }

        if(j==n-1)
        {
            i++;
            j=-1;
        }
    }
    if(m==1)
    {
        cout<<count-1<<endl;
    }
    else
    {
        cout<<count-m+1<<endl;
    }
    
}