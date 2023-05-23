
#include<stdio.h>
int main()
{
    int n,i,b,c,s,j=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
            if(a[i]<b || a[i]>c)
            {
                printf("%d ",a[i]);
                j++;
            }
    }
    if(j==0)
    {
        printf("-1");
    }
}
