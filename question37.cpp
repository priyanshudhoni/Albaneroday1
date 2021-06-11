#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int i,f=0;
    vector<long long int>s;
    for(i=0;i<=a;i++)
    {
        int ii=i;
        while(ii>0)
        {
            
            int c=ii & 1;
            if(c>0)
            f++;
            ii=ii>>1;
            
        }
        s.push_back(f);
        f=0;
    }
    for(auto k:s)
    cout<<k<<" ";
}
