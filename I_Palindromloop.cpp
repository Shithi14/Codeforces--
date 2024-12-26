#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum=0;
    
    cin>>n;
    string p=to_string(n);
    
    string q=p;
    

    reverse(p.begin(),p.end());
    while(p.size()>1 && p[0]=='0')
    {
        p.erase(p.begin());
    }
    cout<<p<<endl;
    if(p==q)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
    
}