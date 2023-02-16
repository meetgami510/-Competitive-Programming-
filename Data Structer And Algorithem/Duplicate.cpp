
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char s[100];
    cout<<"Enter the Stings :";
    cin>>s;
    int n=strlen(s);
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            while(s[i]==s[j])
            {
                count++;
                cout<<s[i]<<"="<<count;
                break;
            }
        }
    }
    return 0;
}