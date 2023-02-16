#include<bits/stdc++.h>
using namespace std; 


int main()
{

//----//pair :  for making making pair
    pair<int,int> pr = {1,7};
    cout<<pr.first<<" "<<pr.second<<endl;

    pair<pair<int,int>,int> par = {{1,8},9};
    cout<<par.first.first<<" "<<par.first.second<<" "<<par.second<<endl;

    pair<pair<int,int>,pair<int,int>> pu = {{4,8},{9,0}};
    cout<<pu.first.first<<" "<<pu.first.second<<" "<<pu.second.first<<" "<<pu.second.second<<endl;

    vector<pair<int,int>>  vec;
    set<pair<int,int>> st;
    map<pair<int,int> ,int> mapp;

    // in unorder_map we can not define pair xxxx unordered_map<pair<int,int>> mpp it is wrong.
    multimap<string,int> mpp;// sortd and multipal keys
    mpp.emplace("raj", 90);
    mpp.emplace("rina",93);
    mpp.emplace("raj",90);

    //stack & Queue
//------//Stack :  lifo dsa
    stack<int> stm;
    //pop
    //size
    //push & emplace
    //empty

    stm.push(90);    
    stm.push(40);    
    stm.push(97);    
    stm.push(8);    
    stm.push(34);    

    cout<<stm.top()<<endl;// prints 34
    stm.pop();// remove 34
    cout<<stm.top()<<endl;//prints 8
    stm.pop();//remove 8
    cout<<stm.top()<<endl;//prints 97

    bool flage = stm.empty();//returns true if stack is empty , or false
    //delete the Entire stack
    while(!stm.empty())
    {
        stm.pop();
    }

    cout<<stm.size()<<endl;
    stack<int> sta;
    // cout<<sta.top()<<endl;//this will gives the error
    if(!sta.empty())
    {
        cout<<sta.top()<<endl;
    }


//----//queue : fifo operation ds
    // push , front , size , pop , empty -- all takes O(1)
    queue<int> q;
    q.push(3);
    q.push(9);
    q.push(0);
    q.push(4);
    q.push(8);

    cout<<q.size()<<endl;//prints 5--size
    cout<<q.front()<<endl;//prints 3--elemets
    q.pop();//remove the elemets from the queue (3 remove)
    cout<<q.front()<<endl;//prints 9--

    //for delete the entire queue---takes linear times
    while(!q.empty())
    {
        q.pop();
    }

//---//priority_queue : inbult in c++ like max Heap and min Heap
    //                : put all inserted elements in queue in desending order
    //                : push , size , pop , top , empty
    //                : double is allow
    priority_queue<int> pq;
    pq.push(4);
    pq.push(78);
    pq.push(43);
    pq.push(3); // pq = { 78 , 43 , 4 , 3}

    cout<<pq.top()<<endl;//print 78
    pq.pop();
    cout<<pq.top()<<endl;//print 43
    pq.pop();

    priority_queue<pair<int,int>> pqm;
    pqm.push({2,7});
    pqm.push({5,8});
    pqm.push({3,0});
    pqm.push({8,2});
    pqm.push({3,7});

    priority_queue<int> pom;//using max prority_queue we can make min prority_queue
    pom.push(-45);
    pom.push(-32);
    pom.push(-20);//pom = { -20 , -32 , -45 }

    cout<<-1 * pom.top()<<endl;//print 20

    //min priority_queue
    priority_queue<int , vector<int> , greater<int>> pqo;
    pqo.push(3);
    pqo.push(39);
    pqo.push(9);
    pqo.push(78);

    cout<<pq.top()<<endl;  // print 3

    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pqo;


//----//deque : Double queue (we can inser or delete elements from both side)
    deque<int> dq;
    //push_front
    //push_back()
    //pop_front()
    //pop_back()
    //begin , end , rbegin ,rend
    //size
    //clear
    //empty,at

//---// List :

    list<int> ls;
    //push_front
    //push_back()
    //pop_front()
    //pop_back()
    //begin , end , rbegin ,rend
    //size
    //clear
    //empty,at
    //remove --> O(1)
    ls.push_front(2);
    ls.push_front(7);
    ls.push_front(9);
    ls.push_front(1);
    ls.remove(7); // O(1) operation



//---// bitset : for storing 1 bit data.
//int -> 16 bit
//char -> 8 bit
int a[100]; // takes more space : 16 bit 
int c[100]; // takes less space compare to int a[100].
    
    bitset<5> bt;//only store 1 & 0.
    cin>>bt; //10101
    //all
    cout<<bt.all()<<endl;//true(11111) : if all bit are set(1).false(10111) : if some  bit are 0 so it reset(0).

    //any
    cout<<bt.any()<<endl;//true(10011) : any one bit set its return true  , false(0000) : 

    //count : counts the number of 1(set bit) in bit set.
    cout<<bt.count()<<endl;//0111011 : 5
     
    //flip : at perticuler index we want to convert 1 into 0 and 0 into 1 .
    //bit set : 001100
    bt.flip(2);
    bt.flip(4);
    //bit set : 011000

    //none : if none is set than true.
    // bt : 1000;
    cout<<bt.none()<<endl;//return false;
    //bt : 0000;
    cout<<bt.none()<<endl;//return true;

    //set : entire bit set goes to  1111..
    bt.set();
    bt.set(3);//bt.set(index) : set the particule  (3)index as 1
    bt.set(2,0); //bt.set(index,0) set the particule (2nd) index as 0

    //reset : entire bit set goes to 000...
    bt.reset();
    bt.reset(4);//turn the 4 th index as 0
    bt.reset(3); // turn the 5th index as 1

    //size
    cout<<bt.size()<<endl;//print the size of bit .

    //test  : for check the particule index
    cout<<bt.test(1)<<endl;//check if the bit is set or not at index 1.

}


