#include <bits/stdc++.h>
using namespace std;


#define endl "\n"

int main()
{
    int n,e=0,p=0,o=0,ne=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            e++;
        }
        if(arr[i]%2!=0)
        {
            o++;
        }
        if(arr[i]>0)
        {
            p++;

        }
        if(arr[i]<0)
        {
            ne++;
        }
    }
    cout<<"Even: "<<e<<endl<<"Odd: "<<o<<endl<<"Positive: "<<p<<endl<<"Negative: "<<ne<<endl;
   

return 0;
}