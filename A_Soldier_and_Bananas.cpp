#include<bits/stdc++.h>
using namespace std;
int main ()
{

int k,n,w,a;
cin>>k>>n>>w;
a=w*(w+1)/2;
int total=k*a;
int borrow=total-n;
if(borrow<0)
{
    borrow=0;
}
cout<<borrow<<endl;
return 0;
}