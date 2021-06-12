#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    int b[n],c[n];

    for(i=0;i<n;i++)
    {
    cin>>a[i];}
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
        b[i]=b[i-1]*a[i];
    }
    c[n-1]=a[n-1];
    
    for(i=n-2;i>=0;i--)
    {
        c[i]=a[i]*c[i+1];
    }
      a[0]=c[1];
      a[n-1]=b[n-2];
      for(i=1;i<n-1;i++)
      {
          
          a[i]=c[i+1]*b[i-1];
      }
      for(i=0;i<n;i++)
      cout<<a[i]<<" ";
      
}
