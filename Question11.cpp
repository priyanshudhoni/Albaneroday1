#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
   cin>>ws;
    int j;
    for(j=0;j<n;j++)
    {
        cin>>ws;
        cin>>a[j];
        
    }
   int k,l,j1;

    cin>>ws; 
    string pattern;
    cin>>pattern;
    
    cout<<"Input array : ";
    for(int i = 0; i<n; ++i)
    cout<<a[i]<<" ";
    cout<<endl;
    
    cout<<"Pattern : ";
    cout<<pattern<<endl;
    
    
    vector<long long int>c;int u=1,w;
    for(w=0;w<pattern.length();w++)
        c.push_back(-1);
    for(j=0;j<pattern.length();j++)
    {
        for(k=j;k<pattern.length();k++)
        {
            if(pattern[j]==pattern[k] && c[k]==-1)
            c[k]=u;
        }
        u++;
    }
    
    
    for(j=0;j<n;j++)
    {
        
        
        vector<long long int>b;u=0;
        for(w=0;w<a[j].length();w++)
        b.push_back(-1);
        
        for(k=0;k<a[j].length();k++)
        {
            
           u++;
            for(l=k;l<a[j].length();l++)
            {
                if(a[j][k]==a[j][l] && b[l]==-1)
                {
                    b[l]=u;
                }
            
            }
           
        }
       
        if(b.size()==c.size())
        {
            for(j1=0;j1<b.size();j1++)
            {
                if(b[j1]==c[j1])
                ;
                else
                break;
            }
            
            if(j1==b.size())
            cout<<a[j]<<" ";
        }
        
    }
}
