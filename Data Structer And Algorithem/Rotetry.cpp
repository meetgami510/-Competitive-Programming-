
#include <iostream>

using namespace std;
void rotety(int a[],int n)
{
    int x=a[n-1];
    for(int i=n-1;i>0;i--)
    {
      a[i]=a[i-1];
    }
    a[0]=x;
}

int main()
{
   int n;
   int a[]={1,2,3,4,5};
   n=sizeof(a)/sizeof(a[0]);
   
   cout<<"Give Array is :";
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   
   rotety(a,n);
   
   cout<<"After Roteting Array:";
   
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   

    return 0;
}