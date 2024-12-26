#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string srr;
    cin>>srr;
    int count[26]={0};
    int l=srr.length();

    for(int i=0;i<l;i++)
    {
        if(srr[i]>='a'&& srr[i]<='z')
        {
            count[srr[i]-'a']++;

        }
    }
    for(int i=0;i<26;i++)

    {
        if(count[i]>0)
        {
            cout<<(char)('a'+i)<<" : "<<count[i]<<endl;
        }
    }
    return 0;
}