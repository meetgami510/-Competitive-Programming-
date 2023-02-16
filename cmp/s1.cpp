#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n;
    cin>>n;

    // map<int,int> mp;
    // vector<int> vex(n);
    // int mai = 0;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>vex[i];
    //     mp[vex[i]]++;
    //     if(mp[vex[i]] > mp[mai])
    //     {
    //         mai=vex[i];
    //     }
    // }
    // cout<<mai<<endl;

    vector<int> ve(n);
    multiset<int> se;
    for(int i=0;i<n;i++)
    {
        cin>>ve[i];
        se.insert(ve[i]);
    }
    for(auto it : se)
    {
        cout<<it<<" ";
    }
    cout<<endl;


    return 0;
}