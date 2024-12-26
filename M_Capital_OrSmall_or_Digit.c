#include<stdio.h>//https://codeforces.com/group/MWSDmqGsZm/contest/219158
int main ()
{
    char x;
    scanf("%c",&x);
    int ascii=x;
    
    if(ascii>=65 && ascii<=90)
{
    printf("ALPHA\nIS CAPITAL\n");
}
else if(ascii>=97 && ascii<=122)
{
    printf("ALPHA\nIS SMALL\n");

}
else
printf("IS DIGIT\n");
return 0;
}