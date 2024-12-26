#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int t;
    cin>>t;
    while(t--){

        string str;
        cin>>str;
        int l=str.length();
        bool result=false;
        for(int i=2;i<l;i++)
        {
            char t=str[i-2];
            char u=str[i-1];
            char v=str[i];
            if((t=='0'&& u=='1' && v=='0') || (t=='1'&& u=='0'&&v=='1'))
            {
                result=true;
                break;
            }
        }
    
            if(result)
            {
                cout<<"Good"<<endl;
            }
            else
            {
                cout<<"Bad"<<endl;
            }
        }
        return 0;
}
    
