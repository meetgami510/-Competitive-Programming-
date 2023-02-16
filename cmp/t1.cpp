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




int main() {
    vector<int> x;
    x.push_back(2);
    x.push_back(4);
    x.push_back(6);
    x.push_back(10);
    int n=0;
    auto it = x.begin();
    while(it != x.end()){
        cout<<*it<<" ";
      x.push_back(5);
      it++;
      n++;
      if(n>10){
        break;
      }    
    }
	// your code goes here
	return 0;
}