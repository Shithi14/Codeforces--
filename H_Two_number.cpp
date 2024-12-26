#include<bits/stdc++.h>
using namespace std;
int main ()
{

    float a,b,s,c,f,r;
    cin>>a>>b;
    s=a/b;
    f=floor(s);
    c=ceil(s);
    r=round(s);
    cout<<"floor "<<a<<" / "<<b<<" = "<<f<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<c<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<r<<endl;
    return 0;
}