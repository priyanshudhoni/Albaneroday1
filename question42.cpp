#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *ptr;
}*head;

void first()
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    cout<<"Enter a value"<<"\n";
    cin>>p->data;
    p->ptr=NULL;
    head=p;
}
void insert()
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    cout<<"Enter a  number"<<"\n";
    cin>>p->data;
    p->ptr=NULL;
    struct node *po;
    
    po=head;
    while(po->ptr!=NULL)
    {
        po=po->ptr;
    }
    po->ptr=p;
}

void operation()
{
    struct node *p=head;  
    struct node *pre=NULL,*cur=head,*next=head;

    while(next!=NULL)
    {
        next=next->ptr;
        cur->ptr=pre;
        pre=cur;
        cur=next;
    }


    struct node *r=pre;
    while(r!=NULL)
    {
        cout<<r->data<<" ";
        r=r->ptr;
    }
    
}
int main()
{
        cout<<"Enter the number of elements"<<"\n";
        int a;
        cin>>a;
        first();
        int j;
        for(j=0;j<a-1;j++)
        insert();
        operation();
}
