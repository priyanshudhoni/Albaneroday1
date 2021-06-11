#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=a,d=b,k=0;
    while(c>0)
    {
        int s=c%10;
        int y=d%10;
        int p=y-s;
        k=k+p;
        c=c/10;
        d=d/10;
    }
    cout<<k<<"\n";
}
