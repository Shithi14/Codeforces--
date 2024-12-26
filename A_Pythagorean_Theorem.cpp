#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=2e8+123;
bool squareside [mx];
int main ()
{
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        squareside[i*i]=true;

    }
    for(int a=1;a<=n;a++)
    {
        for(int b=a;b<=n;b++)
        {
            int c=(a*a)+(b*b);
            if(squareside[c])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
