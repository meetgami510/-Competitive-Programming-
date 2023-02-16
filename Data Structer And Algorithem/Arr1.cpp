#include <iostream>

using namespace std;
int printArray(int arr[],int size)
{
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int reversArray(int arr[],int start,int end)
{
    while(start<end)
    {
    int t=arr[start];
        arr[start]=arr[end];
        arr[end]=t;
        start++;
        end--;
    }    
}

int main()
{
    int arr[]={1,2,3,4,5,5,6,6,7};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr,n);
    
    reversArray(arr,0,n-1);
    
    cout<<"After Reversing the Elements:";
    
    printArray(arr,n);
    return 0;
}