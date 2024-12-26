#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    int a,b,r,gcd;
    cin>>a>>b;
    while(b!=0)
    {
     r=a%b;
    a=b;
    b=r;
    }
    gcd=a;
    cout<<gcd<<endl;

   

return 0;
}