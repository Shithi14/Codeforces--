#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        sum=sum+ch-'0';
    }
    cout<<sum<<endl;
    return 0;
}