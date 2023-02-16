#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void insert(node *head ,int a)
{
    node *temp=head;
    node *nn=new node(a);
    if(head==NULL)
    {
        head->prev=NULL;
        head=nn;
        return ;
    }
    else
    {
        while(temp!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nn;
        nn->prev=temp;
    }
    
}
int main()
{
    node *head=NULL;

    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);
    insert(head,60);

}