	#include<bits/stdc++.h>   
	using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<int> a(n),b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}

	int t1=0,t2=-1;

	for(int i=0;i<n;i++){
		if(a[i] < b[i]){
			cout<<"NO"<<endl;
			return;
		}
		if(b[i]==0){
			t1 = max(t1,a[i]);
		}
		else{
			if(t2<0){
				t2 = a[i]-b[i];
			}else if(a[i]-b[i]!=t2){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	if(t2<=t1 || t2<0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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