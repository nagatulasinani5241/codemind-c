#include<stdio.h>
int main()
{
    int n,i,j,temp,k=0,count=0;
    scanf("%d",&n);
    int a[n];
    temp=n;
    while(n)
    {
        a[k++]=n%10;
        n/=10;
    }
    for(i=0;i<=k;i++)
    {
        count=0;
        for(j=0;j<=k;j++)
        {
            if(i!=j)
            {
                if(a[j]==a[i])
                count++;
            }
        }
        if(count>0)
        {
            break;
        }
    }
    if(count>0)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}
