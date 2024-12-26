#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str,srr;
    cin>>str>>srr;
    string s=str;
    int l1=str.length();
    int l2=srr.length();
    string ptr=str+srr;
    str[0]=srr[0];
    //swap(str[0],srr[0])
    srr[0]=s[0];
    cout<<l1<<" "<<l2<<endl<<ptr<<endl<<str<<" "<<srr<<endl;
    return 0;
}