
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
    if(!head)
    ;
    else
    {
        struct node *p=head;
        struct node *pu=head->ptr;
        struct node *head1=head;
        struct node *head2=head->ptr;
        while(pu && pu->ptr)
        {
            p->ptr=p->ptr->ptr;
            pu->ptr=pu->ptr->ptr;
            p=p->ptr; 
            pu=pu->ptr; 
            
            
        }
        p->ptr=head2;
    
        struct node *y=head;
        while(y!=NULL)
        {
            cout<<y->data<<" ";
            y=y->ptr;
        }
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
