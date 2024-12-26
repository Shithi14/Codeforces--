#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string srr;
    cin>>srr;
    int sum=0;
    int l=srr.length();
    for(int i=0;i<l;i++)
    {
        sum=sum+(srr[i]-'0');
    }
    cout<<sum<<endl;
    return 0;
}