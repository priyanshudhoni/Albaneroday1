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
    struct node *p=head;int capacity=0;struct node *o=head;
    while(p->ptr!=NULL)
    {
        p=p->ptr;
        capacity++;
    }
    capacity++;

    int yy=capacity;
    capacity=capacity/2;
    struct node *i=head;
    while(capacity>1)
    {
        i=i->ptr;
        capacity--;
    }
   //cout<<i->ptr->data;
    struct node *pre=NULL,*cur=i->ptr,*next=i->ptr;
    i->ptr=NULL;
    while(next!=NULL)
    {
        next=next->ptr;
        cur->ptr=pre;
        pre=cur;
        cur=next;
    }
    int l1=0;
    struct node *k=o,*l=pre;
    //cout<<l->data;
    
    
    while(k!=NULL && l!=NULL)
    {
        
        if(l1%2==0)
        {
            o=k;
            k=k->ptr;
            
            o->ptr=l;
            
        }
        else
        {
            pre=l;
            l=l->ptr;
            
            pre->ptr=k;
        }
        l1++;
    }
    struct node *r=head;
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
