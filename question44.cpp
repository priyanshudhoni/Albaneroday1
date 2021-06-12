#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b=-1;
    if(n==1)
    cout<<a[0]<<"\n";
    else{
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            b=a[0];
            a[0]=a[0]*a[1];
        }
        else if(i==n-1)
        {
            a[n-1]=a[n-1]*b;
        }
        else
        {
            int c=b;
            b=a[i];
            a[i]=c*a[i+1];
            
            
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    }
}
