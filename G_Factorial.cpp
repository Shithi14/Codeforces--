#include <bits/stdc++.h>
using namespace std;


#define endl "\n"

int main()
{
   
int t;
cin>>t;
while(t--)
{
    long long int n,fact=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;

}
return 0;
}