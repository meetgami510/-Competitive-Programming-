#include <iostream>

using namespace std;

int arrIndex(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"Index Is:"<<i;
        }
       
    }
    
}

int main()
{
    int a[6]={1,2,1,4,3,5};
    int key;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Enter a Search Elements:";
    cin>>key;
    arrIndex(a,n,key);
    return 0;
}