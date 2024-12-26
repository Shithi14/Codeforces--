#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
   int n,m;
   while(1)
   {
    cin>>n>>m;
    if(n<=0 || m<=0)
    {
        break;
    }
    int sum=0,sum1=0;
    if(n>m)
    {
    for(int i=m;i<=n;i++)
    {
        sum=sum+i;
        cout<<i<<" ";
    }
    cout<<"sum ="<<sum<<endl;
   }
   else
   {
    for(int i=n;i<=m;i++)
    {
        sum1=sum1+i;
        cout<<i<<" ";
    }
    cout<<"sum ="<<sum1<<endl;
   }
   }
return 0;
   }