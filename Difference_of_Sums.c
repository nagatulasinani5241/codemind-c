#include<stdio.h>
int main()
{
    int n,i,sum=0,firstn=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i*i;
        firstn=firstn+i;
    }
    printf("%d",(firstn*firstn)-sum);
}