#include <iostream>

using namespace std;
#define R 4
#define C 4

int Max1sIn_Row(bool m[R][C])
{
   int j,max_row_index=0;
   
   for(int i=0;i<R;i++)
   {
       bool t=false;
       while(j>=0 && m[i][j]==1)
       {
           j=j-1;
           t=true;
       }
       if(t)
       {
           max_row_index=i;
       }
       if(max_row_index==0 && m[0][C-1]==0)
       {
           return -1;
       }
       return max_row_index;
   }
}


int main()
{
    
    bool m[R][C]={{1,0,0,1},{0,0,1,1},{1,1,1,1},{0,1,1,1}};
    cout<<"Number of Row In Max Number Of 1's:"<<Max1sIn_Row(m);
   return 0;
}