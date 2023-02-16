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

        vector<int> an(n);

        for(int i=0;i<n;i++)
        {
            cin>>an[i];
        }
        int min = an[0];
        int ans = 0,p1;
        for(int i=1;i<n;i++)
        {
            if(min > an[i])
            {
                min = an[i];
                p1=i;
            }
        }
        if(min == an[0])
        {
            p1=0;
        }
        for(int i=0;i<n;i++)
        {
            if(p1!=i)
            {
                ans = ans + (an[i]-min);
            }
        }
        cout<<ans<<endl;
     }
 
    return 0;
}