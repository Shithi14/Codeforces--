#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main ()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  vector<int>::iterator it=min_element(v.begin(),v.end());
  cout<<*it<<" "<<(it-v.begin()+1)<<endl;
    return 0;
     


}