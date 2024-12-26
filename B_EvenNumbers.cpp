#include <bits/stdc++.h>
using namespace std;


#define endl "\n"

int main()
{
   int n,fou=0;
   cin>>n;
   for(int i=1;i<=n;i++)
{
    if(i%2==0)
    {
        cout<<i<<endl;
        fou=1;
    }
}
if(!fou)
{
    cout<<"-1"<<endl;
}
return 0;
}