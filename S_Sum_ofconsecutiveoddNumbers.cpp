#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int x,y,sum=0,sum1=0;
    cin>>x>>y;

    
        if(x<y){
        for(int i=x+1;i<y;i++)
        {
            if(i%2!=0)
            {
            sum=sum+i;
            }
        }
        cout<<sum<<endl;
        }
    
    else
    {
        for(int i=y+1;i<x;i++)
        {
            if(i%2!=0)
            {
            sum1=sum1+i;
            }
        }
        cout<<sum1<<endl;
        }
    }
   


   

return 0;
}