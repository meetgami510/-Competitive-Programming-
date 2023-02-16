#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a=0;
     int b=1;
    int n,curr;
    cin>>n;
     for(int i=0;i<n;i++)
     {
         curr = a + b;
         a=b;
         b=curr;
     }
     cout<<curr<<endl;
}