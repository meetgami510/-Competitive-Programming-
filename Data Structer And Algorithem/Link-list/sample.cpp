#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    vector<int> v;
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    }
    int x,a,b;
    cin>>x;
    v.erase(v.begin()+x);
    cin>>a>>b;

    v.erase(v.begin()+a,v.begin()+b);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
