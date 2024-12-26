#include<stdio.h>//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
int main ()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        temp=a;
    
        a=b;
        b=temp;
        
    }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    printf("%d %d\n",a,c);
    return 0 ;
}