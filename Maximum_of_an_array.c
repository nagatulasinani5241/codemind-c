#include<stdio.h>
int main()
{
    int a,i,j,max=0;
    scanf("%d",&a);
    int ram[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ram[i]);
    }
    max=ram[0];
    for(i=0;i<a;i++)
    {
        
        if(ram[i]>max)
        {
            max=ram[i];
        }
    }
    printf("%d",max);
}
