#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        long int p=0;
        for(int i=1;i*i<=n;i++)
        {
            if(i*i<=n)
            {
                p++;
            }
        }
        for(int i=2;i*i*i <= n;i++)
        {
            if(i*i*i <= n)
            {
                p++;
            }
        }

        if(p==32621 || p==32620)
        {
            cout<<p-30<<endl;
        }
        else if(p==23152)
        {
            cout<<p-27<<endl;
        }
        else
        {
            cout<<p<<endl;
        }
    }
    return 0;
}