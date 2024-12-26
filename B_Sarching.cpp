#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int a,position=-1;
    cin>>a;
    for(int i=0;i<n;i++)
   {
    if(v[i]==a)
    {
        position=i;
        break;
    }
   }
  cout<<position<<endl;
}