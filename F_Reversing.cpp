#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main ()
{
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
    
    reverse(v.begin(),v.end());
   
for(auto u:v)
{
    cout<<u<<" ";
}

}