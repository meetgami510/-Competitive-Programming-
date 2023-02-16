#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
 
#define MOD 1000000007
#define MOD1 998244353
#define gs(v) ((int)v.size())
#define int long long int
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define nl cout<<nline;

 
#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<" "; _print(x); cerr<<"\n";
#else
#define debug(x)
#endif
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
// Call this function if you wish to know if my code give TLE or not
void checkTimeout() {
    double tm = (float)clock() / CLOCKS_PER_SEC;
    if (tm >= 2) {
        cerr << "Time limit exeeded" << endl;
        exit(0);
    }
}
typedef long long ll;
 
typedef unsigned long long ull;
typedef long double lld;
 
using namespace __gnu_pbds;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ordered_set1 tree<int,null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set2 tree<int,null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set3 tree<int,null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set4 tree<int,null_type,greater_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
// Operator overloads <<, >>
template<typename T1, typename T2>
istream &operator>>(istream &istream, pair<T1, T2> &p) {
    return (istream >> p.first >> p.second);
} // cin >> pair<T1, T2>
template<typename T>
istream &operator>>(istream &istream, vector<T> &v) {
    for (auto &it : v) {
        cin >> it;
    }
    return istream;
} // cin >> vector<T>
template<typename T1, typename T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) {
    return (ostream << p.first << " " << p.second) << nline;
} // cout << pair<T1, T2>
template<typename T>
ostream &operator<<(ostream &ostream, const vector<T> &c) {
    for (auto &it : c) {
        cout << it << " ";
    }
    return ostream;
} // cout << vector<T>
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
// complexity of this function Log(max(a,b))
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll simpleExpo(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) ; a = (a * a); b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return ((a - b) + m) % m;}
//only for prime m
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}
 
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}
 
void yes() {
    cout << "YES\n";
}
void no() {
    cout << "NO\n";
}
 
 
#define ordered_set1 tree<int,null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set2 tree<int,null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set3 tree<int,null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set4 tree<int,null_type,greater_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
 
vector<ll> givePrefixInclude(vector<ll> &vect) {
    vector<ll>prefix(vect.size(), 0);
 
    prefix[0] = vect[0];
 
    for (int i = 1 ; i < vect.size() ; i++)
        prefix[i] = prefix[i - 1] + vect[i];
 
    return prefix;
}
 
vector<ll> givePrefixExclude(vector<ll> &vect) {
    vector<ll>prefix(vect.size(), 0);
 
    for (int i = 1 ; i < vect.size() ; i++)
        prefix[i] = prefix[i - 1] + vect[i - 1];
 
    return prefix;
}
 
vector<ll> givePostfixInclude(vector<ll> &vect) {
    vector<ll>postfix(vect.size(), 0);
    ll size = postfix.size();
 
    postfix[size - 1] = vect.back();
 
    for (ll i = size - 2 ; i >= 0 ; i--)
        postfix[i] = postfix[i + 1] + vect[i];
 
    return postfix;
}
 
vector<ll> givePostfixExclude(vector<ll> &vect) {
    vector<ll>postfix(vect.size(), 0);
    ll size = postfix.size();
 
    for (ll i = size - 2 ; i >= 0 ; i--)
        postfix[i] = postfix[i + 1] + vect[i + 1];
 
    return postfix;
}
 
void setPrecesion(ll val) {
    std::cout << std::fixed;
    std::cout << std::setprecision(val);
 
}
 
bool primeCheck(ll val) {
    ll temp = ceil(sqrt(val));
    for (ll i = 2 ; i <= temp ; i++) {
        if ( 0 == val % i )
            return false;
    }
    return true;
}
 
// complexity of this function is O(N*Log(N))
void countFactors(ll n) {
    vector<ll> factors(n + 1, 0);
    for (ll i = 2 ; i <= n ; i++) {
        for (ll j = i ; j <= n  ; j += i) {
            factors[j] += 1;
        }
    }
}
 
// complexity of this function is O(N*(Log(Log(N))))
vector<bool> checkAllPrime(ll n ) {
    vector<bool>isPrime(n + 1, true);
    isPrime[1] = false;
    isPrime[0] = false;
    for (ll i = 2 ; i <= n ; i++) {
        if ( isPrime[i] ) {
            for (ll j = i * i ; j <= n ; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}
 
vector<ll> allCountPrimeFactors(ll n) {
    vector<ll>primeFactors(n + 1, 0);
 
    for (ll i = 2 ; i <= n ; i++) {
        if ( 0 == primeFactors[i] ) {
            for (ll j = i * 2 ; j <= n ; j += i) {
                primeFactors[j] += 1;
            }
        }
    }
    return primeFactors;
}
 
ll _gcd(ll n1, ll n2) {
    if ( 0 == n1 )
        return n2;
    return _gcd(n2 % n1, n1);
}
 
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1> {}(p.first);
        auto hash2 = hash<T2> {}(p.second);
        return hash1 ^ hash2;
    }
};
// use in this ways
// unordered_map<pair<int, int>, int , hash_pair> ump;

/*--------------------------------------------------------------------------------------------------------------------------*/
ll floorSqrt(ll x)
{
    // Base cases
    if (x == 0 || x == 1)
        return x;
 
    // Starting from 1, try all numbers until
    // i*i is greater than or equal to x.
    ll i = 1, result = 1;
    while (result <= x)
    {
        i++;
        result = i * i;
    }
    i -= 1;
 
    return i;
}
void primeFactors(ll n, map<ll, ll> &mp)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        n = n / 2;
        mp[2] += 1;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            // cout << i << " ";
            n = n / i;
            mp[i] += 1;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n >= 2)
        mp[n] += 1;
}
ll power(ll x, ll  y)
{
    if (y == 0)
        return 1;
    ll temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
void nextGreater(vector<int> &nums, vector<int> &ng) {
    stack<int> st;
 
    int len = nums.size();
    ng[len - 1] = -1;
    st.push(len - 1);
 
    for (int i = len - 2 ; i >= 0 ; i--) {
        while ( !st.empty() && nums[st.top()] <= nums[i] )
            st.pop();
        if ( st.empty() )
            ng[i] = -1;
        else
            ng[i] = st.top();
        st.push(i);
    }
}
void nextSmaller(vector<int> &nums, vector<int> &ns) {
    stack<int> st;
 
    int len = nums.size();
    ns[len - 1] = -1;
    st.push(len - 1);
 
    for (int i = len - 2 ; i >= 0 ; i--) {
        while ( !st.empty() && nums[st.top()] >= nums[i] )
            st.pop();
        if ( st.empty() )
            ns[i] = -1;
        else
            ns[i] = st.top();
        
        st.push(i);
    }
}

void prevSmaller(vector<int> &nums,vector<int> &ps){
    stack<int> st;
    int len = nums.size();
    ps[0] = -1;
    st.push(0);
    for(int i=1 ; i<len ; i++){
        while( !st.empty() && nums[st.top()]>nums[i] )
            st.pop();
        if( st.empty() )
            ps[i] = -1;
        else
            ps[i] = st.top();
        st.push(i);
    }
}
 
ll binarySize(ll num) {
    ll size = 0;
    while (num)
        size += 1, num = num >> 1;
    return size;
}
 
ull decSize(ull num) {
    ll size = 0;
    while ( num )    size += 1, num /= 10;
    return size;
}
 
struct cmpByStringLength {
    bool cmp(const ll &left, const ll &right) {
        return left > right;
    }
 
};
 
// ...
 
void findAllFactors(ll n, std::vector<ll>& factors) {
    double sqroot = sqrt(n);
    factors.push_back(1);
    for (ll i = 2; i <= sqroot; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (n / i != i) {
                factors.push_back(n / i);
            }
        }
    }
    factors.push_back(n);
}
class Dsu {
public:
    int size;
    vector< int > parent, vectSize;
    Dsu(int size) {
        this->size = size+1;
        parent = vector<int> (size+1);
        vectSize = vector<int>(size+1, 1);
        for (int i = 0 ; i <= size ; i++) parent[i] = i;
    }
    int findParent(int node) {
        if ( parent[node] == node )    return node;
        return parent[node] = findParent(parent[node]);
    }
    void Union(int node1, int node2) {
        node1 = findParent(node1);
        node2 = findParent(node2);
        if ( node1 != node2 ) {
            parent[node1] = node2;
            // if ( vectSize[node1] > vectSize[node2] ) {
            //     vectSize[node1] += vectSize[node2];
            //     vectSize[node2] = 0;
            //     parent[node2] = node1;
            // } else {
            //     vectSize[node2] += vectSize[node1];
            //     vectSize[node1] = 0;
            //     parent[node1] = node2;
            // }
        }
    }
};
ll lcm(ll a, ll b) {
    return (a * b) / (_gcd(a, b));
}
void print(ll val) {
    cout << val << nline;
}
class TREE{
public:
void binary_lifting(int node,int par,vector<vector<int>> &adj,vector<vector<int>> &up){
    up[node][0] = par;
    for(int i=1 ; i<20 ; i++){
        if( -1!=up[node][i-1] )
            up[node][i] = up[up[node][i-1]][i-1];
        else
            break;
    }
    for(auto val : adj[node] ){
        if( par!=val )
            binary_lifting(val,node,adj,up);
    }
}
void giveHeight(int node,int par,vector<vector<int>> &adj,vector<int>&height,int ch){
    height[node] = ch;
    for(auto val : adj[node] ){
        if( val!=par ){
            giveHeight(val,node,adj,height,ch+1);
        }
    }
}
int jump(int node,int target,vector<vector<int>> &up){
    for(int i=19 ; i>=0 ; i--){
        int t = 1<<i;
        if( t&target ){
            node = up[node][i];
        }
        if( -1==node )  return node;
    }
    return node;
}
int LCA(int node1,int node2,vector<vector<int>>&adj,vector<vector<int>>&up,vector<int> &height){
    
    if( height[node2]<height[node1] )
        swap(node1,node2);
    node2 = jump(node2,height[node2]-height[node1],up);
    if( node1==node2 )  return node1;
    for(int i=19 ; i>=0 ; i--){
        if( -1!=up[node1][i] && -1!=up[node2][i] && up[node1][i]!=up[node2][i] ){
            node1 = up[node1][i];
            node2 = up[node2][i];
        }
    }
    return up[node1][0];
}
};
class SGT{
public:
int basicBuild(int ind,int low,int high,vector<int> &vect,vector<int>&seg){
    if( low==high ){
        return seg[ind] = vect[low];
    }
    int mid = (low+high)/2;
    seg[ind] = min( basicBuild(2*ind+1,low,mid,vect,seg),basicBuild(2*ind+2,mid+1,high,vect,seg) );
    return seg[ind];
}

int find(int ind,int low,int high,int left,int right,vector<int> &seg){
    if( high<left || right<low )    return INF;
    if( left<=low && right>=high )  return seg[ind];
    int mid = (low+high)/2;
    return min( find(2*ind+1,low,mid,left,right,seg),find(2*ind+2,mid+1,high,left,right,seg) );
}
int update(int ind,int low,int high,int targetInd,int newData,vector<int>&seg){
    if( low==high ){
        return seg[ind] = newData;
    }
    int mid = (low+high)/2;
    if( mid<targetInd ){
        update(2*ind+2,mid+1,high,targetInd,newData,seg);
    }else{
        update(2*ind+1,low,mid,targetInd,newData,seg);
    }

    return seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
}

};
class LSGT{
public:
    vector<int> seg;
    vector<int> lazy;
    LSGT(int size){
        seg = vector<int>(4*size+1);
        lazy = vector<int>(4*size+1,0);
    }
    void build(int ind,int low,int high,vector<int> &data){
        if( low==high ){
            seg[ind] = data[low];
            return;
        }
        int mid = (low+high)/2;
        build(2*ind+1,low,mid,data);
        build(2*ind+2,mid+1,high,data);
        seg[ind] = seg[2*ind+1]+seg[2*ind+2];
    }
    void update(int ind,int low,int high,int left,int right,int addVal){
        seg[ind] += lazy[ind]*(high-low+1);
        if( low==high ){
            lazy[ind] = 0;
            seg[ind] += addVal;return;
        }
        lazy[2*ind+1] += lazy[ind];
        lazy[2*ind+2] += lazy[ind];
        lazy[ind] = 0;
        if( left<=low && right>=high ){
            seg[ind] += (high-low+1)*addVal;
            lazy[2*ind+1] += addVal;
            lazy[2*ind+2] += addVal;
        }else if( left>high || right<low ){
            return;
        }else{
            int mid = (low+high)/2;
            update(2*ind+1,low,mid,left,right,addVal);
            update(2*ind+2,mid+1,high,left,right,addVal);
            seg[ind] = seg[2*ind+1]+seg[2*ind+2];
        }
    }
    int find(int ind,int low,int high,int left,int right){
        seg[ind] += (high-low+1)*lazy[ind];
        if( low!=high ){
            lazy[2*ind+1] += lazy[ind];
            lazy[2*ind+2] += lazy[ind];
        }
        lazy[ind] = 0;
        if( left<=low && right>=high ){
            return seg[ind];
        }else if( left>high || right<low )
            return 0;
        else{
            int mid = (low+high)/2;
            int ls = find(2*ind+1,low,mid,left,right);
            int rs = find(2*ind+2,mid+1,high,left,right);
            return ls+rs;
        }
    }
};

int kedans(vector<int> &a){
    int size = a.size();
    int max_so_far = INT_MIN, max_ending_here = 0,start =0, end = 0, s=0;
 
    for (int i=0; i<size; i++ )
    {
        max_ending_here += a[i];
 
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
 
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    // start it will give strting index of max sum subarray
    // end will give ending index
    return max_so_far;
}
vector< vector<char> > mat;
bool isPos(int r,int c){
    if( r<mat.size() && c<mat[0].size() && r>=0 && c>=0 && '.'==mat[r][c] )
        return true;
    return false;
}
vector< int > dr;;
queue< pair<int,int> > q;
vector< int > dc;
void helper(int r,int c){
    if(isPos(r,c)){
        mat[r][c] = 'X';
        for(int i=0 ; i<4 ; i++){
            if( isPos(r+dr[i],c+dc[i]) ){
                if( '.'==mat[r+dr[i]][c+dc[i]] )
                    q.push({r+dr[i],c+dc[i]});
            }
        }
        helper(r-1,c-1);
        helper(r+1,c+1);
    }
}

void solve(){
    cout<<"hello world";
}

signed main() {
    fastio();
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("outpt.txt", "w", stdout);
//     freopen("Error.txt", "w", stderr);
// #endif
    ll test;
    
    cin >> test;
    
    while (test--) {
        solve();
        //checkTimeout();
    }
    //cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}

// use unordered_map only when no. of unique values in ump is less than 10^4 OR you have enough time to do rehashing
 
// don't try to be fast during contest try to be accurate and observe all the corner cases
 
// toggle ctrl+shift+z