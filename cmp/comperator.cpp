#include<bits/stdc++.h>
using namespace std;

// bool cmp(int e1,int e2)
// {
//     if(e1 <= e2)
//     {
//         return false;
//     }
//         return true;
// }

bool camp(pair<int,int> &p1,pair<int,int> &p2)
{
    // if(p1.first == p2.first)  //Q-1 : we need to sort a pair like : if first elments are equel 
    //                                    :then prioriy is we give greater elements its become first.
    // {
    //     if(p1.second <= p2.second)
    //     {
    //         return false;
    //     }
    //     return true;
    // }
    if(p1.second <= p2.second)// according to second elements if we want to sort.
    {
        return true;
    }
    return false;
}

int main()
{
    int len;
    cin>>len;

    // vector<int> ans(len);
    // for(int i=0;i<len;i++)
    // {
    //     cin>>ans[i];
    // }
    // sort(ans.begin(),ans.end(),cmp);
    // sort(ans.begin(),ans.end(),greater<int>) : greater<int> inbulit comparator which works for only deceding of data.
    // for(int i=0;i<len;i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    vector<pair<int,int>> ans;
    for(int i=0;i<len;i++)
    {
        int a,b;
        cin>>a>>b;
        ans.push_back({a,b});
    }
    sort(ans.begin(),ans.end(),camp);
    //sort(ans.begin(),sna  )
    cout<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}