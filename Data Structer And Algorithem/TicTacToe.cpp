#include <iostream>

using namespace std;

  int space[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int row;
  int column;
  char token= 'x';

int function1
{
   string n1;
   string n2;
   
   cout<<"Enter the Name of First Players:\n";
   getline(cin,n1);
   cout<<"Enter the Name of Second Players:\n";
   getline(cin,n2);
   
   cout<<n1<<"Is player1 so he/she will play first:  \n";
   cout<<n2<<"Is player2 so he/she will play first:  \n";
   
   cout<< "     |      |      \n";
   cout<< "   "<<space[0][0]<<" |   "<<space[0][1]<<"  |  "<<space[0][2]<<"  \n";
   cout<< "_____|______|______\n";
   cout<< "     |      |      \n";
   cout<< "   "<<space[1][0]<<" |   "<<space[1][1]<<"  |  "<<space[1][2]<<"  \n";
   cout<< "_____|______|______\n";
   cout<< "     |      |      \n";
   cout<< "   "<<space[2][0]<<" |   "<<space[2][1]<<"  |  "<<space[2][2]<<"  \n";
   cout<< "     |      |      \n";
}

void function2{
    
    int digit;
    
    if(token=='x')
    {
        cout<<n1<<"Please Enter:";
    }
    if(token=='0')
    {
        cout<<n2<<"Please Enter:";
    }
    if(digits==1)
    {
        row=0;
        column=0;
    }
    if(digits==2)
    {
        row=0;
        column=1;
    }
    if(digits==3)
    {
        row=0;
        column=2;
    }
    if(digits==4)
    {
        row=1;
        column=0;
    }
    if(digits==5)
    {
        row=1;
        column=1;
    }
    if(digits==6)
    {
        row=1;
        column=2;
    }
    if(digits==7)
    {
        row=2;
        column=0;
    }
    if(digits==8)
    {
        row=2;
        column=1;
    }
    if(digits==9)
    {
        row=2;
        column=2;
    }
    
    else
    {
        cout<<"Not Invelide:";
    }
    
    if(token=='x' && space[row][column] != 'x' && space[row][column] != '0')
    {
        space[row][column]='x';
        token='0';
    }
    else if(token=='0' && space[row][column] != 'x' && space[row][column] != '0')
    {
        space[row][column]='0';
        token='x';
    }
 
    
    
    
}