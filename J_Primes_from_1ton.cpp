#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        for( j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;

            }
        }
            if(i==j)
            {
                cout<<i<<" ";
            }
        
    }
    return 0;
}