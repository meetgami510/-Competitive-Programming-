#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;

    node(int a)
    {
        data=a;
        next=NULL;
    }
};

void print(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<"  ";
        curr=curr->next;
    }
    
}
node *revers(node *head)
{
    node *curr=head,*next=NULL,*prev=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
node *reversk(node *head , int k)
{
    node *curr=head;
    node *prev=NULL;
    node *next=NULL;
    int count=0;
    while(curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
    {
        node *rest_head=reversk(next,k);
        head->next=rest_head;
    }
    return prev;
}
int main()
{
    node *head=new node(20);
    head->next=new node(30);
    head->next->next=new node(40);
    head->next->next->next=new node(50);
    head->next->next->next->next=new node(70);
    cout<<"given link list:";
    print(head);
    cout<<"\n\n";
    cout<<"Reverse link list:";
    head=revers(head);
    print(head);
    cout<<"\n\n";
    cout<<"Revese link list up to K position:";
    head=reversk(head,3);
    print(head);


}