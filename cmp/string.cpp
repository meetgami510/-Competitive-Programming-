#include<bits/stdc++.h>
using namespace std;

// Q-1 I give you  any redom string s = "bac" , we want to print all the permutation.
int main(){

    string mm = "bac";
    sort(mm.begin(),mm.end());//sort in lexeco graphic rule && takes O(N log N)
    string ans;
    cout<<mm<<" ";
    while(next_permutation(mm.begin(),mm.end()))
    {
        cout<<mm<<" ";
    }
    cout<<endl;
    mm="cba";
    cout<<mm<<" ";
    while(prev_permutation(mm.begin(),mm.end()))// function return true or false .
    {
        cout<<mm<<" ";
    }

    
    return 0;
}
