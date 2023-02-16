#include<bits/stdc++.h>   
using namespace std;

int subsequence(int ind,vector<int>& arr,int n,int s,int sum)
{
	if(ind == n)
	{
		if(s==sum) return 1;
		else
			return 0;
	}
	// an.push_back(arr[ind]);
	s += arr[ind];
	int l = subsequence(ind+1,arr,n,s,sum);
	s -= arr[ind];
	// an.pop_back();
	int r = subsequence(ind+1,an,arr,n,s,sum);
	return l+r;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	vector<int> arr = {3,5,2,4,4,2,1,4,5,8,9,0,2,4};
	vector<int> ans;
	

	cout<<"Total Number of subsequence : "<<subsequence(0,arr,arr.size()-1,0,8);

}