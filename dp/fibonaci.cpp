#include<bits/stdc++.h>   
using namespace std;

vector<int> dp(100,-1);
int call(int n)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n] = call(n-1) + call(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<call(n);
}