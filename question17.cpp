Code:
#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][m];
    int i,j,f=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]%2==0)
            f=f+a[i][j];
        }
    }
    cout<<f<<endl;
}
