#include<bits/stdc++.h>   
using namespace std;

#define read(type) readInt<type>()
#define ll long long
#define vi vector<int>
#define nL
#define pb push_back
#define mk make_pair
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define pii pair<int, int>
#define a first
#define b second


struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
 
        if (hash1 != hash2) {
            return hash1 ^ hash2;             
        }
         
        // If hash1 == hash2, their XOR is zero.
          return hash1;
    }
};


bool gcdSort(vector<int>& nums) 
{
    unordered_map<pair<int,int>,int,hash_pair> mp;
    int n = nums.size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mp[{nums[i],nums[j]}] = -1;
            mp[{nums[j],nums[i]}] = -1;
        }
    }
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]>nums[j] && (mp[{nums[i],nums[j]}]>1))
            {
                swap(nums[i],nums[j]);
            }
            else
            {
                if(mp[{nums[i],nums[j]}]!=-1 && mp[{nums[j],nums[i]}] != -1)
                {
                    mp[{nums[i],nums[j]}] = (__gcd(nums[i],nums[j]));
                    mp[{nums[j],nums[i]}] = (__gcd(nums[i],nums[j]));
                }
            }
        }
        cout<<nums[i]<<" ";
    }

    vector<int> ans = nums;
    sort(nums.begin(),nums.end());
    return ans==nums;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    if(gcdSort(nums)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 
    return 0;
}