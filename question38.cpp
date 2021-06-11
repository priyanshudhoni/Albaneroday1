#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];
    int j;
    for(j=2;j<n;j++)
    {
        a[j]=a[j]+(min(a[j-1],a[j-2]));
    }
    cout<<min(a[j-2],a[j-1]);
    
}
