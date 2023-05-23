#include<stdio.h>
int main()
{
    int n,i,sum=0,avg,l=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg<=a[i])
        {
            l++;
        }
        
    }
    printf("%d",l);
}
