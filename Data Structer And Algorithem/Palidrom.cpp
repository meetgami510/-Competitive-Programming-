#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char a[100],b[100];
    cout<<"Enter the Strings :";
    cin>>a;
    
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
       b[n-1-i]=a[i]; 
    }
    if(strcmp(a,b)==0)
    {
        cout<<"Give String is Palidrom:";
    }
    else
    {
        cout<<"Given string is not palidrom:";
    }
    return 0;
}   