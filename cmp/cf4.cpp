#include<bits/stdc++.h>   
using namespace std;

#define read(type) readInt<type>()
#define ll long long
#define vi vector<int>
#define nL
#define pb push_back
#define mk make_pair
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define pii pair<int, int>
#define a first
#define b second


int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);

int tc; 

cin >> tc;

while(tc--) {
    main; ios_base::sync_with_stdio(false);

     int n;
     cin>>n;
     string s;
     cin>>s;
     int x = 3;
     int ones = 0;
     int zeros = 0;
     for(int i=0;i<n;i+=2)
     {
         if(s[i]==s[i+1])
         {
             if(s[i]-'0' != x)
             {
                 x=s[i]-'0';
                 ones++;
             }
         }
         else
         {
             zeros++;
         }
     }
     cout<<zeros<<endl;

     

     }
 return 0;
}