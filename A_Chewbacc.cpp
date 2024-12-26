#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    cin>>a;
    int l=a.length();
    char t=a[0];
    for(int i=0;i<l;i++)
    {
        int digit=a[i]-'0';
        int diff=9-digit;
        if(digit>diff)
        {
            a[i]=diff+'0';
        }
    }
    if(a[0]=='0')
    {
        a[0]=t;
    }
    for(int i=0;i<l;i++)
    {
        cout<<a[i];
    }
}







/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
string srr;
cin>>srr;
int l=srr.length();
for(int i=0;i<l;i++)
{
int digit=srr[i]-'0';
int t=9-digit;


if(digit>t)
{
    cout<<t;
}
else if(t>digit)
{
    cout<<digit;
}
else
{
    cout<<srr[i];
}
}
return 0;
}*/