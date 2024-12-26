#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=10)
        {
            
     cout<<"A["<<i<<"] = "<<arr[i];
     cout<<endl;
        }
        
    }
   
    return 0;
    
 }
