#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int o=a.length();int i,j;
    int f=-1,l=0;
  //  cout<<a<<" "<<b;
    for(i=0;i<b.length();i++)
    {
        for(j=0;j<o;j++)
        {
            if(b[i]==a[j] && j>f)
            {
             f=j;  l++; 
            }
        }}
        if(l==b.length())
        cout<<"TRUE";
        else
        cout<<"FALSE";
    }
