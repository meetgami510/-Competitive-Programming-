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
        set<int> v;
        v.insert(1);
        int i=2;
        while(1)
        {
            if(i*i <= n)
            {
                v.insert(i*i);
            }
            else
            {
                break;
            }
            i++;
        }
        while(1)
        {
            if(t*t*t <= n)
            {
                v.insert(t*t*t);
            }
            else
            {
                break;
            }
            t++;
        }

        cout<<v.size()<<endl;
    }
    return 0;
}