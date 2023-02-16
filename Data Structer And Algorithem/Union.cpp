#include <iostream>

using namespace std;
void printUnion(int a1[],int a2[],int n1,int n2)
{
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            cout<<a1[i++]<<" ";
        }
        else if(a2[j]<a1[i])
        {
            cout<<a2[j++]<<" ";
        }
        else
        {
            cout<<a2[j++]<<" ";
            i++;
        }
    }
    while(i<n1)
    {
        cout<<a1[i++]<<" ";
    }
    while(j<n2)
    {
        cout<<a2[j++]<<" ";
    }
}

int main()
{
    int a1[]={2,3,5,6,2,7,8};
    int a2[]={3,9,8,10,34,7,5};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
    
    printUnion(a1,a2,n1,n2);
    
    return 0;
}