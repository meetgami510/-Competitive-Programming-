#include <iostream>

using namespace std;


struct pair
{
    int min;
    int max;
};

struct pair Getminmax(inr arr[],int n)
{
    struct pair minmax;
    int i;
    
    if(n==1)
    {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }
    if(arr[0]>arr[1])
    {
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else
    {
        minmax.min=arr[0];
        minmax.max=arr[1];
    }
    for(i=2;i<n;i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max=arr[i];
        }
        else if(arr[i]<minmax.min)
        { 
            minmax.min=arr[i];  
        }
        return minmax;
    }
}
    
int main()
{
    int arr[]={2,333,4532,4533,64244};
    int arr_size=5;
    
    struct pair minmax=Getminmax(arr,arr_size)
    
    cout<<"Minimum Elements is:"<<minmax.min;
    cout<<"Maximum Elements is :"<<minmax.max;
    return 0;
}