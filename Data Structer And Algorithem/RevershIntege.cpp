#include <iostream>

using namespace std;
void rotety(int a[],int b[],int n)
{
   
    for(int i=0;i<n-1/2;i++)
    { 
         b[i]=a[n-i-1];
    }
    for(int i=0;i>n-1/2;i++)
    { 
         a[i]=a[n-i-1];
    }
     for(int i=0;i<n-1/2;i++)
    { 
        a[i]=b[i];
    }
    
   
}

int main()
{
   int n;
   int a[]={1,2,3,4,5};
   int b[100];
   n=sizeof(a)/sizeof(a[0]);
   
   cout<<"Give Array is :";
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   
   rotety(a,b,n);
   
   cout<<"After Roteting Array:";
   
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
       
       
   }
   

    return 0;
}