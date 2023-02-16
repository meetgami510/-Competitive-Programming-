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

void solve(){
    int len;
    cin>>len;
    vector< int > vect(len);
    for(int i=0 ; i<len ; i++)  cin>>vect[i];
    sort(vect.begin(),vect.end());
    priority_queue< int , vector<int> , greater<int> > minHeap;
    for(auto val : vect){
        if( minHeap.top()<val ){
            int temp = minHeap.top();minHeap.pop();
            minHeap.push(temp+1);
        }else
            minHeap.push(1);
    }
    cout<<minHeap.size()<<"\n";
}

int main()
{
  
    
    int tc; 
    cin >> tc;

    while(tc--) {
        solve();
    }
 
    return 0;
}