#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,l;
    cin>>s>>l;
    vector<int>a;
    int i,p=s;
    for(i=0;i<l;i++)
    {
        a.push_back(p);
        p=p+s;
    }
    for(i=0;i<l;i++)
    cout<<a[i]<<" ";
}
