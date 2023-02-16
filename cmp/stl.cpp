#include<bits/stdc++.h>
using namespace std;  // rather than using std::cout and std::cin we use using namespace std.

// namespace meet{
//     int val = 40;
// }

// max size of 10^7 -> int , double , char
// int arr[10000000];
// // max size if 10^8  for bool
// bool arr[100000000];

array<int,3> ans; //   all elments are 0 when we decler a Globle;
int main()
{
    // max size of 10^6 -> int , double , char
    // int arr[1000000];
    // // max size if 10^7  for bool
    // bool arr[10000000];

    // int cal=10;
    // double cal=10.0;
    // cout<<cal<<endl; // its give error

    // cout<<meet::val<<endl;
    array<int,2> ans1;// --> {?.?}
    array<int,3> ans2={2,3};// {2,3,0}    int arr[1000]={0}
    
    array<int,5> vex;
    vex.fill(10);    //--> filling the all elements {10,10,10,10,10}
    int index;
    vex.at(index);   // --> its give index val
    for(int i=0;i<5;i++)
    {
        cout<<vex.at(i)<<" ";
    }


    //iterators
    // begin() : first elemets
    // end()   : last elements + 1
    // rbegin() : last elemenats
    // rend()   : before first elemeants{first_elmenta - 1}
    cout<<endl;
    array<int,4> ans = {3,2,6,7};
    for(auto it=ans.begin();it!=ans.end();it++)
    {
        cout<<*it<<" ";
    } 
    cout<<endl;
    // reverse the array
    for(auto it=ans.rbegin();it!=ans.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=ans.end()-1;it>=ans.begin();it--)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    string ss = "ancmontaw";
    for(auto c : ss)
    {
        cout << c <<" ";
    }
    cout<<ans.size();
    cout<<ans.front();  // ans.at(0)
    cout<<ans.back();     // ans.at(ans.size()-1)

    // Vector

    // vector<int> av;
    // av.push_back(4);
    // av.push_back(6);
    // cout<<" "<<av.size();
    // av.pop_back();
    // av.push_back(20);
    // av.push_back(23);

    // av.clear();
    // // for clear the whole vector 
    // vector<int> vec1(2,0);
    // vector<int> vec2(5,10);
    // // copy of Entire vector vec2 to vec3
    // vector<int> vec3(vec2.begin(),vec3.end());
    // vector<int> ve(vec2);

    // vector<int> meet;
    // meet.push_back(23); // meet.emplace_back(34)  emplace_back takes lesser time than push_back
    // meet.push_back(21);
    // meet.push_back(5);
    // meet.push_back(56);   // {23,21,5,56}
    
    // vector<int> a1(meet.begin(),meet.end()+2); // {23,21} last exclude ded.

    //2D vector

    vector<vector<int>> am1;

    vector<int> v1;
    v1.push_back(34);
    v1.push_back(45);
    vector<int> v2;
    v2.push_back(65);
    v2.push_back(90);
    vector<int> v3;
    v3.push_back(57);
    v3.push_back(90);

    am1.push_back(v1);
    am1.push_back(v2);
    am1.push_back(v3);
    cout<<endl;
    for(auto mno : am1)
    {
        for(auto imo : mno)
        {
            cout<<imo<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<am1.size();i++)
    {
        for(int j=0;j<am1[i].size();j++)
        {
            cout<<am1[i][j]<<" ";
        }
        cout<<endl;
    }

    //define the 10 * 20 
    vector<vector<int>> vem(10,vector<int> (20,0));

    //define the 10 * 20 * 30
    vector<vector<vector<int>>> ant(10,vector<vector<int>> (20,vector<int> (30,0)));

    return 0;

 //-----//set  :   it gives unique elemets and Aseding order

    set<int> so;
    so.insert(2);
    so.insert(5);
    so.insert(9);
    so.insert(2);
    so.insert(1);

    so.emplace(9);// sitly fast than insert function

    auto it = so.find(2); // log n   // it will be iterator to 7
    
    auto it = so.find(3); // it = so.end()

    for(auto it=so.begin();it!=so.end();it++)
    {
        cout<<*it<<" ";
    }
    for(auto itm : so)
    {
        cout<<itm<<" ";
    }

    so.erase(so.begin(),so.end());
    so.clear();

//------//unordered_set : Only in Unique Elments are there in this,redom order output

    unordered_set<int> st;
    st.insert(10);
    st.insert(3);
    st.insert(9);
    //average time complesity is O(1)
    //tle -- switch to set
    //but worth case is linear  in nuture ,o(set_size)


//-----//multiset  : only for  asending order to stor the data
//                 : Double are allow
    multiset<int> mup;
    mup.insert(2);
    mup.insert(2);
    mup.insert(10);
    mup.insert(10);
    mup.insert(2);//mup.emplace(2)
    //mup={2,2,2,10,10}
    mup.erase(2);    //all the intanse will be earase
    auto it = mup.find(10);  //returns to iterator pointing to the first intanse of key(10)
    mup.clear();
    for(auto it=mup.begin();it!=mup.end();it++)
    {
        cout<<*it<<" ";
    }
    for(auto itm : mup)
    {
        cout<<itm<<" ";
    }
    //find how many time key(2) occurse
    mup.count(2);

    mup.erase(mup.find(2));
    


 
//-----//map :  everayting in sorted order.if data is string : so store in lexecografic order(a,b,c,..,y,z)
        //   :  store only Unique keys.
    map<string,int> mp;
    mp["raj"]=39;
    mp["hit"]=90;
    mp["rtinfg"]=29;
    mp["teje"]=37;  //  mp = { hit->90 , raj->39 , rtinfg->29 , teje->37 }

    mp.emplace("tina",329);

    mp.erase("raj");   //mp.erase(key)
    mp.erase(mp.begin());//mp.erase(iterator)
    mp.erase(mp.begin(),mp.end());
    mp.clear();

    auto it = mp.find("hit");  // points to where hit lies
    mp.count("hit"); // always returns 1 as store only 1
    if(mp.empty())
    {
        cout<<"YEs it is Empty";
    }

    pair<int,int> pr;
    pr.first = 1;
    pr.second = 10;

    for(auto it : mp)
    {
        cout<<it.first<< "  " << it.second << endl;
    }

    for(auto it = mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second;
    }
}