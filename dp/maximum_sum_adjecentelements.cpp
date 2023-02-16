	#include<bits/stdc++.h>   
	using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input2.txt","r",stdin);
	freopen("output2.txt","w",stdout);
	#endif

    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string ss;
        cin>>ss;
        
        for(int i=0;i<n;i=i+2)
        {
            swap(ss[i],ss[i+1]);
        }
        for(int i=0;i<n;i++)
        {
            ss[i] = 26 - ss[i];
        }
        cout<<ss<<endl;
    }
	// your code goes here
	return 0;
	
}