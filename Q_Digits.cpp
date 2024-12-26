#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    string s=to_string(n);
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
     cout<<s[i]<<" ";
    }
    cout<<endl;
   }

return 0;
}