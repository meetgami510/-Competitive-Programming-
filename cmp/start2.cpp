#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string str;
    cin>>str;

    int n = str.size();
    vector<int> vm(26,false);
    int m = 0;
    for(char i : str)
    {
        if(vm[i-97])
        {
            m += 2;
            fill(vm.begin(),vm.end(),false);
        }
        else{
            vm[i-97] = true;
        }
    }
    cout<<n - m <<endl;
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