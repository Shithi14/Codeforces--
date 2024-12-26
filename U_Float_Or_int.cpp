 #include<bits/stdc++.h>
 using namespace std;
 int main ()
 {
    float n;
    cin>>n;
    int part1=(int)n;;
    float part2=n-part1;
    if(part2==0)
    {
        cout<<"int "<<part1<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(3)<<"float "<<part1 <<" "<< part2<<endl;
    }
    return 0;
 }