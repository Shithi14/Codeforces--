#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string srr,str;
    cin>>str>>srr;

    for(int i=0;i<str.length();i++)
    {
        str[i]=toupper(str[i]);
    }
    for(int i=0;i<srr.length();i++)
    {
        srr[i]=toupper(srr[i]);
    }
    if(str>srr)
    {
        cout<<"1"<<endl;
    }
else if (str==srr)
{
    cout<<"0"<<endl;
}
else
{
    cout<<"-1"<<endl;
}
return 0;
}