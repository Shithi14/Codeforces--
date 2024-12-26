#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
   int n,count=0;
   cin>>n;
   for(int i=2;i<n;i++)
   {
    if(n%i==0)
    {
        count++;
        break;
    }
   }
   if(count==0)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
   

return 0;
}