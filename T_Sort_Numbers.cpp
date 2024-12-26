#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int a,b,c;
   cin>>a>>b>>c;
   vector<int>num={a,b,c};
   sort(num.begin(),num.end());
   for(int i=0;i<3;i++)
   {

cout<<num[i]<<endl;
   }
   cout<<endl;
   
   cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}