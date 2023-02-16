#include<bits/stdc++.h>   
using namespace std;

void solve(){

	int n,m;
	cin>>n>>m;

	int miq = 4,mim = 4;
	char q;
	vector<pair<int,int>> vec;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>q;
			if(q == 'R'){
				vec.emplace_back(i,j);
				miq = min(miq,i);
				mim = min(mim,j);
			}
		}
	}

	pair<int,int> ff = {miq,mim};

	if(find(vec.begin(),vec.end(),ff) != vec.end()){
		cout<<"YES"<<endl;
	}
	else{
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