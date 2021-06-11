#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int j;
    int s[a];
    for(j=0;j<a;j++)
    cin>>s[j];
    sort(s,s+a);
    vector<int>c;
    for(j=0;j<a-1;j++)
    {
        if(s[j]!=s[j+1])
        {
            c.push_back(s[j]);
        }
    }
    c.push_back(s[a-1]);
    for(auto g:c)
    cout<<g<<" ";
}
