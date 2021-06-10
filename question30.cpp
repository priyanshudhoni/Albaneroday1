#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int a;
    cin>>a;
    int p=a;
    int u=0,l=0;
    while(p>0)
    {
        int s=p%10;
        u=u+s;
        p=p/10;
        l++;
        
    }
    
    cout<<u/l<<"\n";
}
