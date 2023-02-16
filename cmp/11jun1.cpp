#include<bits/stdc++.h>   
using namespace std;

void solve(int n){
	int x = n/2;

	while(x-1 > n-2*x+1){
		x--;
	}
	x++;
	if(n-2*x+1 == 0){
		cout<<x-2<<" "<<x<<" "<<n-2*x+2<<endl;
	}else{
		cout<<x-1<<" "<<x<<" "<<n-2*x+1<<endl;
	}

}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		solve(n);
	}
	
}