#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]%2==0)
        {
            sum=sum+s[i];
        }
    }
    printf("%d",sum);
}
