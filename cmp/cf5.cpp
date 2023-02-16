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
        int km=1000000007;
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<vector<int>> ans(n,vector<int> (n));
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j)
                {
                    ans[i][j]  = ans[i][j-1];
                }
                if(a[i] > a[j])
                {
                    ans[i][j]++;
                }
            }
        }
        long long answer = 0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                answer += (long long)ans[j][i-1]*(a[i]-ans[i][j]-1);
            }
        }
        cout<<answer<<endl;
     }
 
    return 0;
}   