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
    int local_max=0;
    int global_max=INT_MIN;
    int j;
    for(j=0;j<n;j++)
    {
        
        local_max=max(a[j],a[j]+local_max);
        if(local_max>global_max)
        global_max=local_max;
        
        
    }
    cout<<global_max;
}
