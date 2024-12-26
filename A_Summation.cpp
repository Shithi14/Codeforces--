#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
        

     sum=sum+arr[i];

    }
    if(sum<0)
    {
        sum=(-1)*sum;
        cout<<sum<<endl;
    }
    else
    {
   cout<<sum<<endl;
    }
    return 0;
}