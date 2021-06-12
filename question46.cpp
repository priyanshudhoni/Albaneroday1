#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    a=" "+a;
    int i;
   // cout<<a;
    for(i=0;i<a.length()-1;i++)
    {
        if(a[i]==' ')
        {
            if(isupper(a[i+1]))
            ;
            else
            break;
        }
        
        if(isupper(a[i]) && isupper(a[i+1]) && i!=(a.length()-2))
        break;
        if(a[a.length()-1]!='.')
        break;
    }
    if(i==a.length()-1)
    cout<<"TURE";
    else
    cout<<"FALSE";
    //cout<<i;
}
