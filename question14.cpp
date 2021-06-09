#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int n;
    cin>>n;
    int a[n];
    int j;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    int k;int p=0;
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(a[j]>a[k])
            {
                p=a[j];
                a[j]=a[k];
                a[k]=p;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
}
}
