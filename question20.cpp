#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;

cin>>n;

int k=0;

int a[n];

int j;

for(j=0;j<n;j++)

{

cin>>a[j];

}

sort(a,a+n,greater<int>());

for(j=0;j<5;j++)

k=k+a[j];

cout<<k;

}
