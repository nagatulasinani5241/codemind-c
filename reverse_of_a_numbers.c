#include<stdio.h>
int main()
{
    int i,n,r,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
            printf("%d",s);
}
