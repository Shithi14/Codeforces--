#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int result=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n-1;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                result=min(result,arr[i]+arr[j]+(j-1));
            }
        }
        cout<<result<<endl;

    }
}