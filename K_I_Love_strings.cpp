#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str,ptr;
        cin>>str>>ptr;
         int i=0,j=0;
         while(i<str.length()|| j<ptr.length())
         {
            if(i<str.length())
            {
                cout<<str[i];
                i++;
            }
            if(j<ptr.length())
            {
                cout<<ptr[j];
                j++;
            }
         }
         cout<<endl;

    }
    return 0;

}