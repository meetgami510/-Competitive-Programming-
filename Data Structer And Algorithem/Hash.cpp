#include<bits/stdc++.h>
using namespace std;

struct Myhash
{
    int BUCKET;
    list<int> *table;
    Myhash(int b)
    {
        BUCKET=b;
        table = new list<int>[BUCKET];
    }
    void insert(int k)
    {
        int i=k % BUCKET;
        table[i].push_back(k);
    }
    bool search(int k)
    {
        int i= k % BUCKET;
        for(auto x : table[i])
        {
            if(x==k)
            {
                return true;
            }
        }
        return false;
    }
    void ramove(int k)
    {
        int i = k % BUCKET;
        table[i].remove(k);
    }
};

int main()
{
    Myhash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(45);
    mh.insert(53);
    cout<<mh.search(45)<<endl;
    mh.ramove(20);
    cout<<mh.search(20);

    return 0;
}