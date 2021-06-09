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
        if(a[j]%2==0)
        cout<<a[j]<<" ";
    }
}
