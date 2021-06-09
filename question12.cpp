#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    char j;int k,p,f=0;
    string h=a;
   
    while(f<a.length())
    {
        for(j='a';j<='z';j++)
        {
            for(k=0;k<a.length();k++)
            {
                if(a[k]==j)
                {
                    cout<<j;
                    a[k]=-1;
                    f++;
                    break;
                }
                
            }
            if(f==a.length())
            break;
        }
         for(p=a.length()-1;p>=0;p--)
            h=h+a[p];
        if(f==a.length())
        break;
    }
}
