#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int arr[n];
        int p=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                p++;
            }
        }
        if(p==(n-1))
        {
            cout<<0<<endl;
        }
                vector<int> v;
        int u=0;
        for(int i=0;i<n;i++)
        {
            while(arr[i]>0)
            {
                int p=arr[i]%10;
                v.push_back(p);
                arr[i]=arr[i]/10;
                u++;
            }
            sort(v.rbegin(), v.rend());
            for(int j=0;j<u;j++)
            {
                cout<<v[j];
            }
            cout<<" ";
            v.clear();
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}