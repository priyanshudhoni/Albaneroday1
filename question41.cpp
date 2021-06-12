#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[100000]={0};
    int n;
    cin>>n;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        
    }
    for(i=0;i<100000;i++)
    {
        if(b[i]>0)
        cout<<i<<"->"<<b[i]<<" ";
    }
    
}
