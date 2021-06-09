#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int j;int k,p,f=0;
    string h=a;
   array<char,26>b;
   for(j=0;j<26;j++)
   b[j]=97+j;
    while(f<a.length())
    {
        for(j=0;j<26;j++)
        {
            for(k=0;k<a.length();k++)
            {
                if(a[k]==b[j])
                {
                    cout<<b[j];
                    a[k]=-1;
                    f++;
                    break;
                }
                
            }
            if(f==a.length())
            break;
        }
         reverse(b.begin(),b.end());
        if(f==a.length())
        break;
    }
}
