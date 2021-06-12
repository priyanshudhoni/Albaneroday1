#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int i;
    int j;
    cout<<"ROW"<<"\t"<<"COLUMN"<<"\t"<<"VALUE"<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]!=0)
            cout<<i<<"\t"<<j<<"\t"<<a[i][j]<<"\n";}
    }
}
