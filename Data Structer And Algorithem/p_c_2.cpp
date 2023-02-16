#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vv vector<int>
#define ss string

bool check(ss l)
{
    ss o=l;
    int n = l.length();
    for(int i=0 ; i < n/2 ; i++)
    {
        swap(l[i],l[n - i - 1]);
    }
    if(o == l)
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
    ss s,q;
    cin>>s;
    cin>>m;
    vv arr;

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