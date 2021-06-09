#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int n;
    cin>>n;
 int a[n];int j,k=0;
for(j=1;j<=n;j++)
{
    if(n%j==0)
    {
        a[k]=j;k++;
    }
}
for(j=0;j<k;j++)
cout<<a[j]<<" ";
}
