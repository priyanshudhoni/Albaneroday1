#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    long long int s[26]={0};int i;
    for( i=0;i<a.length();i++)
    {
        s[a[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(s[i]>1)
        {
            cout<<"false";
            break;
        }
    }
    if(i==26)
    cout<<"true"<<"\n";
}
