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

        vector<int> a(n);
        int count = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            a[i] = -abs(a[i]);
        }
        for(int i=count;i<n;i++)
        {
            a[i] = abs(a[i]);
        }
        bool te = true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                 te = false;
                 break;
            }
        }
        if(te == true)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
     }
 return 0;
}