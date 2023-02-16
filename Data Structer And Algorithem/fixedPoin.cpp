#include <iostream>

using namespace std;

int arrfixed(int a[],int n)
{
   
    for(int i=0;i<n;i++)
    {
        if(a[i]==i)
        {
           cout<<"a"<<"["<<i<<"]"<<"="<<i<<"\n";
        }
        //cout<<"\n";
    }
    return -1;
    
}

int main()
{
    int a[6]={1,2,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Fixed Point Is :";
    arrfixed(a,n);
    return 0;
}