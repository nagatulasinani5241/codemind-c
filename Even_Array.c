
#include<stdio.h>
int main()
{
    int n,b=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            b++;
        }
    }
    if(b==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
