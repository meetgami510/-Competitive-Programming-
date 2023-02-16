#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v={2,4,6,7,8};
    auto i=v.begin();

    cout<<*i<<" ";
    i++;
    cout<<*i<<" ";

    i=v.end();
    i--;
    cout<<*i<<" ";

    return 0;
}