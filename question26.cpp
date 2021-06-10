#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b=a,s=0;
    int p=b%10;
    while(b>0)
    {
        int s=b%10;
        if(s==p)
        ;
        else
        break;
        p=s;
        b=b/10;
        
    }
    if(a>0 && b==0)
    cout<<"true"<<"\n";
    else
    cout<<"false"<<"\n";
}
