#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<long long int>>a;
    int i;
    for(i=0;i<n;i++)
    {
        int p;
        cin>>p;
        vector<long long int>s;
        int j;
        for(j=0;j<p;j++)
        {
            int k;
            cin>>k;
            s.push_back(k);
        }
        a.push_back(s);
    }
    vector<long long int>k;long long int u=LLONG_MIN;
    for(auto g:a)
    {
        u=LLONG_MIN;
        for(auto c:g)
        {
            if(c>u)
            {
            u=c;
        }}
        k.push_back(u);
        
    }
    
    for(auto f:k)
    cout<<f<<" ";
}
