#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
   string s,p;
   getline(cin,s);
   for(int i=0;i<s.size();i++)
   {
    if(s[i]!=' ' && s[i]==' ')
    {
     p[i]=reverse(s[i].begin(),s[i].end())  ;
       }
   }
   cout<<p;

return 0;
}