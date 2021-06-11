#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2];
    cin>>a[0]>>a[1];
    int g=a[0];int k=a[1];int s=0,r=0;
    while(g>0)
    {
        s=s+g%10;
        g=g/10;
    }
    while(k>0)
    {
        r=r+k%10;
        k=k/10;
    }
    if(r==s)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}
