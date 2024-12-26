#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
     cin>>s[i];
    }
   int count[26]={0} ;    

for(int i=0;i<n;i++){
   
        count[s[i]-'a']++;

    
}
for(int i=0;i<26;i++)
{
    if(count[i]>0)
    {
        cout<<(char)('a'+i);
    }
}
return 0;

}