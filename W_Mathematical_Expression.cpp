#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,p,q,r;
    char x,y;
    cin>>a>>x>>b>>y>>c;
    if(x=='+')
    {
        p=a+b;
    }
    else if(x=='-')
    {
        p=a-b;
    }
    else if(x=='*')
    {
        p=a*b;
    }
    if(c==p)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<p<<endl;
    }
    return 0;
}