#include<stdio.h>
int main()
{
    int n,i,b,c,j=0,max=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&b,&c);
    max=a[b];
    for(i=0;i<n;i++)
    {
            if(a[i]<b || a[i]>c)
            {
                if(a[i]>max)
                {
                    max=a[i];
                    j++;
                }
            }
    }
        if(j==0)
        {
            printf("-1");
        }
        else
        printf("%d",max);
    
}
