#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/3600;
    c=(a-(b*3600))/60;
    d=(a-(b*3600)-(c*60));
    printf("H:M:S-%d:%d:%d",b,c,d);
}