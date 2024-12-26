#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    int l=str.length();
    char temp=a[0];
    for(i=0;i<l;i++)
    {
        int digit=a[i]-'0';
        int diff=9-digit;
        if(digit>diff)
        {
            a[i]=diff-'0';
        }
    }
    if(a[0]=='0')
    {
    a[0]=temp;
    }
    for(i=0;i<l;i++)
    {
        cout<<a[i]<<endl;
    }
}