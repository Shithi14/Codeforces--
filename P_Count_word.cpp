#include<bits/stdc++.h>
using namespace std;
int main ()

{
string str;
int count=1;
getline(cin,str);
for(int i=0;i<str.size();i++)
{
    if(str[i]!='.' && str[i]!=' ' &&str[i]!=','&&  str[i+1]==' ')
    {
        count++;
    }
}
cout<<count<<endl;

return 0;
}