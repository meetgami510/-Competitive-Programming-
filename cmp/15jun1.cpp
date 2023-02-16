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
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    #endif
    
    int tc; 
    cin >> tc;

    while(tc--) {
        main; ios_base::sync_with_stdio(false);
        string s;
        int n;
        cin>>s>>n;
        ll hours = (s[0]-'0')*10 + (s[1]-'0');
        ll min = (s[3]-'0')*10 + (s[4]-'0');
        
        ll h = n/60;
        ll m = n%60;
        cout<<h<<" "<<m<<endl;
        ll ans1 = 0;
        ll ho = hours,mi = min;
        // hours += h;
        // min += m;
        ll res = 0;
        // cout<<hours<<" "<<min<<endl; 
        while(1){
            if(hours==ho && min==mi){
                res++;
            }
            if(res>=2){
                break;
            }
            ll ans = hours;
            // cout<<ans<<" ";
            ll temp = ans%10;
            ans=ans/10;
            temp = temp*10 + ans;
            // cout<<temp<<" ";
            if(temp == mi){
                ans1++;
            }
            hours += h;
            min += m;
            if(hours>24){
                hours=hours%24;
            }
            if(min>60){
                min = min%60;
            }
        }
        cout<<ans1<<endl;
     }
 
    return 0;
}