#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str,str1;
    cin>>str;
    int l=str.length();
    str1.resize(l);
    str1=str;
    for(int i=0,j=l-1;i<j;i++,j--)
    {
        char t=str[i];
        str[i]=str[j];
        str[j]=t;

    }
    bool result=true;

    for(int i=0;i<l;i++)
    {
        if(str[i]!=str1[i])
        {
            result=false;
            break;
        }

    }
    if(result)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}













/*#include<bits/stdc++.h>
using namespace std;
int main ()
{
   string str,strr;
   cin>>str;
   int l=str.length();
   strr.resize(l);
   for(int i=0;i<l;i++){
    strr[i]=str[i];

   }
   for(int i=0,j=l-1;j>=0;i++,j--)
   {
    strr[i]=str[j];
    
   }
   bool result=true;
  for(int i=0;i<l;i++)
   {
   if(strr[i]!=str[i])
   {
     result=false;
    break;


   }
   }
   if(result)
   {
    cout<<"Palindrom"<<endl;
   }
   else
   {
    cout<<"NOT Palindrom"<<endl;
   }
   return 0;
}*/

