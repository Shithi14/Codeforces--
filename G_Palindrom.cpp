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
bool result=true;
for(int i=0;i<n/2;i++)
{
    if(v[i]!=v[n-i-1])
    {
        result=false;
        break;
    }
}
if(result)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
return 0;
}
