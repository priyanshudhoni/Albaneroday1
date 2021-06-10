#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x[a][b];
    int i;
    int j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>x[i][j];
            if(x[i][j]==0)
            x[i][j]=1;
            else
            x[i][j]=0;
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
}
