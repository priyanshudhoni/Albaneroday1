
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int j;
    int h=0,d=0;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
        if(a[j]>0)
        h++;
        if(a[j]<0)
        d=d+a[j];
    }
    cout<<h<<" "<<d;
}
