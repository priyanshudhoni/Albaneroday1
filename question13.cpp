Question 13:
#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int i,j,f=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            f++;
        }
    }
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<f<<"\n";
}
