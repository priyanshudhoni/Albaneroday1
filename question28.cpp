#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 string a;
 cin>>a;
 int i;
 int f=0;
 for(i=0;i<a.length();i++)
 {
        if(a[i]=='1')
        f++;
 }
    if(f%2==0)
    ;
    else
    a=a+"1";
cout<<a;
}
