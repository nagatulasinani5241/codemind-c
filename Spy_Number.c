#include<stdio.h>
int main()
{
    int i,n,s=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        s=s+i;
        p=p*i;
        n=n/10;
    }
        if(s==p)
        {
            printf("Spy Number");
        }
        else
        {
            printf("Not Spy Number");
        }
}
