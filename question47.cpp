
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
 
bool operation(struct node *right)
{
   if(right==NULL)
   return true;
   else
   {
      bool b=operation(right->ptr);
       if(b==true)
       {
           if(right->data==head->data)
           {
                    head=head->ptr;
                    return true;
           }
           else
           return false;
           
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
        
        bool q=operation(head);
        if(q==true)
        cout<<"Palindrome";
        else
        cout<<"Not plaindrome"<<"\n";
}
