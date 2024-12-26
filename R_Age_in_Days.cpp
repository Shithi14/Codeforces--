#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,y,m,d,r;
    cin>>n;
y=n/365;
r=n%365;
m=r/30;
d=r%30;
cout<<y<<" years"<<endl<<m<<" months"<<endl<<d<<" days"<<endl;
return 0;
}