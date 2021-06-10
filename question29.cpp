#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int a;
    cin>>a;
    int p=a;
    string u="";
    while(p>0)
    {
        int s=p%10;
        u=to_string(s*s)+u;
        p=p/10;
        
        
    }
    cout<<u<<"\n";
}
