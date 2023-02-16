#include<bits/stdc++.h>   
using namespace std;

void solve(){

	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;

	if(l1>r2 || l2>r1){
		cout<<l1+l2<<endl;
	}
	else if(l1>l2){
		cout<<l1<<endl;
	}
	else{
		cout<<l2<<endl;
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
		solve();
	}
	
}