#include<bits/stdc++.h>
using namespace std;
int main ()
{
string str,ptr="hello";
cin>>str;

int j=0;
for(int i=0;i<str.size();i++)
{
    if(str[i]==ptr[j])
    {
        j++;

    }
}
   
if(j==5)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
return 0;
}