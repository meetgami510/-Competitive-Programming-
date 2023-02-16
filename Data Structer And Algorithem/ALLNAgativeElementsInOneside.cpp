#include <iostream>

using namespace std;

int main()
{
    int arr[]={2,-3,-4,5,-2,3,-7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
           j=i; 
           cout<<arr[j]<<" ";
        }
    }
    j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
           j=i; 
           cout<<arr[j]<<" ";
        }
    }
    return 0;
}