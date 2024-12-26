#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main ()


{
    int t;
    cin >>t;
    while(t--)
    {

string str;
cin>>str;
int l=str.length();
if(l<=10)
{
    cout<<str<<endl;
}
else
{
    cout<<str[0]<<l-2<<str[l-1]<<endl;
}
    }
return 0;

    
}