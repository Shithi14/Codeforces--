#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main ()
{
    int n;
    cin>>n;
    bool passlevel[101]={false};
    int p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int arr;
        cin>>arr;
        passlevel[arr]=true;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int arr;
        cin>>arr;
        passlevel[arr]=true;
    }
bool totallevel= true;
for(int i=1;i<=n;i++)
{
    if(!passlevel[i])
    {
        totallevel=false;
        break;
    }
}
if(totallevel)
{
    cout<<"I become the guy."<<endl;
}
else
{
    cout<<"Oh, my keyboard!"<<endl;
}
return 0;

}