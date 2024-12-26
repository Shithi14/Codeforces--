#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,result;
    cin>>n;
    result=n/1000;
    if(result%2==0)
    {
    cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
    
    return 0;
}