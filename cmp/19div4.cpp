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
        int tc; 
        cin >> tc;
     
        while(tc--) {
            long long n;
            cin>>n;
     
            long long ans;
            string s;
            cin>>s;
            vector<int> resu(n);
            int u=0;
            int an = 0;
            for(int i=0;i<n/2;i++) {
                int an = 0;
                int mo = 0;
                if(s[i] == 'L') {
                    s[i] = 'R';
                    for(int j=0;j<n;j++) {
                        if(s[j] == 'R') {
                            an += (n-1-j);
                        }else{
                            an += j;
                        }
                    }
                    resu[u++] = an;
                }
                //s[i] = 'L';
                if(s[n-i-1] == 'R') {
                    s[n-i-1] = 'L';
                    for(int j=0;j<n;j++) {
                        if(s[j] == 'R') {
                            mo += (n-1-j);
                        }else{
                            mo += j;
                        }
                    }
                    resu[u++] = mo;
                }
                //s[i] = 'R';
            }
            int yo = 0;
            for(int i=0;i<n;i++) {
                if(s[i] == 'R') {
                    yo += (n-1-i);
                }else{
                    yo += i;
                }
            }
            for(int i=0;i<n;i++) {
                if(resu[i] == 0) {
                    resu[i] = yo;
                }
            }
            for(int i=0;i<resu.size();i++) {
                cout<<resu[i]<<" ";
            }
            cout<<endl;
        }
     
        return 0;
    }