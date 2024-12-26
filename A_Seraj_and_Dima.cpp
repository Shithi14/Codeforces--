#include<bits/stdc++.h>
 using namespace std;
 int main ()
 {
    int n;
    cin>>n;
    int game[n];
    for(int i=0;i<n;i++)
    {
        cin>>game[i];

    }
    int left=0,right=n-1;
    int seraj =0,dima= 0;
    while(left<=right)
    {
        if(game[left]<game[right])
        {
            seraj=seraj+game[right];
            right--;
        }
        else
        {
            seraj=seraj+game[left];
            left++;
        }

        if(left<=right)
        {
            if(game[left]<game[right])
            {
                dima=dima+game[right];
                right--;

            }
            else
            {
                dima=dima+game[left];
                left++;
            }
        }
    }
    cout<<seraj<<" "<<dima;

 }