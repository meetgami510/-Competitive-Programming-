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
        int n,m;
        cin>>n>>m;
        string ans[55];
        for(int i=0;i<n;i++)
        {
            cin >> ans[i];
        }
        int mio = INT_MAX;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                int temp = 0;
                for(int k=0;k<m;k++)
                {
                    temp += abs(ans[i][k]-ans[j][k]);
                }
                mio = min(temp,mio);
            }
        }
        cout<<mio<<endl;
     }
 
    return 0;
}
