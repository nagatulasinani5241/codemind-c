#include<stdio.h>
int main()
{
    int r,o,il,i2;
    int n = 1;
    scanf("%d",&r);
    for(o=0; o<r; o++)
    {
        for(il=r-1; il>o; il--)
        {
            printf(" ");
        }
        for(i2=0; i2<n; i2++)
        {
            printf("%d",n-o);
        }
        n += 2;
        printf("
");
    }
}