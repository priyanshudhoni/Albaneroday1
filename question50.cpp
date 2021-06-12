#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    int top=0,down=n-1,l=0,r=m-1;
    int dic=0;
    while(top<=down && l<=r)
    {
        if(dic==0)
        {
            for(i=l;i<=r;i++)
            cout<<a[top][i]<<" ";
            top++;
        }
        else if(dic==1)
        {
            for(i=top;i<=down;i++)
            cout<<a[i][r]<<" ";
            r=r-1;
        }
        else if(dic==2)
        {
            for(i=r;i>=l;i--)
            cout<<a[down][i]<<" ";
            down--;
            
        }
        else
        {
            for(i=down;i>=top;i--)
            cout<<a[i][l]<<" ";
            l++;
        }
        dic=(dic+1)%4;
    }
}
