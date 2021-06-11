#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string s[a];
    cin>>ws;
    
    int j;
    for(j=0;j<a;j++)
    {
    cin>>s[j];

    }
    
    for(j=0;j<a;j++)
    {
        if(s[j][0]>=97 && s[j][0]<=122)
        s[j][0]=s[j][0]-32;
    }
    for(j=0;j<a;j++)
    cout<<s[j]<<" ";
}
