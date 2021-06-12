#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-2;i++)
    {
        for(k=i+1;k<n-1;k++)
        {
            
        
        int y=a[k]-a[i];
        for(j=k+1;j<n;j++)
        {
            if(a[j]-a[k]==y)
            cout<<a[i]<<" "<<a[k]<<" "<<a[j]<<"\n";
        }
}
}
}
