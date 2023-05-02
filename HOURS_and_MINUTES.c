#include<stdio.h>
int main()
{
    int min;
    scanf("%d",&min);
    int h,m;
    h=min/60;
    m=min-h*60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}