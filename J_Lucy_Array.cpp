#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>:: iterator it=min_element(v.begin(),v.end());
int minvalue=*it;
/*int frequency=0;
for(int i=0;i<n;i++)
{
    if(v[i]==minvalue)
    {
        frequency++;
    }
}
*/
int frequency=count(v.begin(),v.end(),minvalue);

if(frequency %2==0)
{
    cout<<"Unlucky"<<endl;
}
else
{
    cout<<"Lucky"<<endl;
}



    
}