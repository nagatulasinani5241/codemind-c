#include<stdio.h>
int main()
{
    int n,s1=0,s2=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s1=s1+r;
        s2=s2*r;
        n=n/10;
    }
    if(s1==s2)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
