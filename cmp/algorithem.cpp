#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin>>len;
    vector<int> vex(len);
    // vector<int> vem(4,0);// all 4 elmens are inciarlez with 0;
    for(int i=0;i<len;i++)
    {
        cin>>vex[i];
    }
    cout<<endl;
    // for(int i=0;i<vem.size();i++)
    // {
    //     cout<<vem[i]<<" ";
    // }

    sort(vex.begin(),vex.end());//vex.end() is exclude in the sorting 
    sort(vex.begin()+1,vex.begin()+3);
    for(int i=0;i<len;i++)
    {
        cout<<vex[i]<<" ";
    }
//----//reverse of vector:
    reverse(vex.begin(),vex.end());//vex.end() is exclude in the sorting 
    reverse(vex.begin()+1,vex.begin()+3);
    cout<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<vex[i]<<" ";
    }
    cout<<endl;
//---// Maximun or Minimum Elements in vector :
    int mx = *max_element(vex.begin(),vex.end());
    int mn = *min_element(vex.begin(),vex.end());
    cout<<"Maximun Elments in Vector :"<<mx<<endl;
    cout<<"Minimum Elments in vector :"<<mn<<endl;

//--// rang sum betweem i and j 
    int sum = 0;
    for(int k=2;k<=5;k++)
    {
        sum += vex[k];
    }
    // accumulate(firstItretor,enditretor,0(initialsum));
    int sum1 = accumulate(vex.begin(),vex.end(),0);


//--// For count the Number in vector how many time occurse
    int cnt = 0;
    int k=9;
    for(int i=0;i<len;i++)
    {
        if(vex[i]==k)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    int cnt1 = count(vex.begin(),vex.end(),9);

//--//    arr = {2,1,5,3,3,6}
    int inde = -1;
    int x=8;
    for(int i=0;i<len;i++)
    {
        if(vex[i]==x)
        {
            inde = i;
            break;
        }
    }

    auto it = find(vex.begin(),vex.end(),1);
    //return the itretor of given element(1) and if it is not there so return the end() itretor.
    //  index = it - vex.begin()  its for index for elements
    int ind = it - vex.begin();

    // vex = {3 , 5 , 7 , 2 , 3 , 4 , 9}
    auto fi = find(vex.begin(),vex.end(),8);
    if(fi == vex.end())
    {
        cout<<"Elenets is not presents in vector :"<<endl;
    }
    else
    {
        cout<<"Elements is "<<it - vex.begin();
    }


//--// BInary search : its is applicable for sorted vector.
// vex = {3 , 88 ,89 , 90}
    bool res = binary_search(vex.begin(),vex.end(),9);
    // if 9 is there its return true if not then false.

//--//lower bound function :  return the iterator of the first elements which is not less than x.
    //                     :   (return x or greater x --- first elmenets )
    //                     : works in sorted array and time-complexity is O(lon N)
    // vex = { 2 3 4 4 5 5 5 8 8 9};
    auto im = lower_bound(vex.begin(),vex.end(),5);
    int tp = im - vex.begin();// tp = 4
    //if elemtnets is 10, so no elemenets in vector its return end() itretor;

//--//upper_bound  : returns the iterator which points to an elments which is just greater .
    //             : vex = {2 3 4 6 6 7 7 8 8 9 11 11 12}
    //             : X = 7 ---8(index = 7),x=12---return end(),x=2---1(0) 
    auto im = upper_bound(vex.begin(),vex.end(),5);
    int tp = im - vex.begin();  
//--// Q-1 find me the first index where the elments x lies 
        // vex = { 2 3 3 5 5 6 6 6 11 11 17 18}
    // ans-1
        if(binary_search(vex.begin(),vex.end(),17)==true)
        {
            cout<<lower_bound(vex.begin(),vex.end(),17) - vex.begin();
        }
        else{
            cout<<"does not exits";
        }
    //ans-2
        int ind = lower_bound(vex.begin(),vex.end(),17) - vex.begin();
        if(ind != len && vex[ind]==17)
        {
            cout<<ind<<endl;
        }
        else{
            cout<<"Not in vector:"<<endl;
        }

//--//  find me the last occurnce of the vector
        // : vex = {2 4 5 5 5 6 6 6 7 8 8 11 12 13 13 13}
        int c = 6;
        int ind = upper_bound(vex.begin(),vex.end(),c) - vex.begin();
        ind -= 1;
        if(ind>=0 && vex[ind]==c)
        {
            cout<<"last Occurance :"<<endl;
        }
        else{
            cout<<"Does not exits :"<<endl;
        }
//--// Q-3 tell me number of time x is appears
    // vex = {2 4 5 5 5 6 6 6 7 8 8 11 12 13 13 13}
    int m = lower_bound(vex.begin(),vex.end(),6) - vex.begin();
    int n = upper_bound(vex.begin(),vex.end(),6) - vex.begin();
    n -= 1;
        cout<<"X appears in array :"<<n - m<<endl;

//----// Next Permutation :

// string ss = "abc"
// all permutation :  abc , acb , bac , bca , cab , cba
    string ss = "bac";
    bool res = next_permutation(ss.begin(),ss.end());//complecity : O(n)
    //after execute this line res = true and ss becomes ss="bca";
    string s = "cba";
    bool rea = next_permutation(s.begin(),s.end());
    //rea = false and s = "cba"   because after "cba" no permutation are there.

    // In sring Total Number of Permutation : n!

//---//prev_permutation : its give prev_permutation of given string,vector,char,etc...

    bool ans2 = prev_permutation(s.begin(),s.end());    


}