#include<stdio.h>
int main()
{
    int a,i,j,min=0;
    scanf("%d",&a);
    int ram[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ram[i]);
    }
    min=ram[0];
    for(i=0;i<a;i++)
    {
        
        if(ram[i]<min)
        {
            min=ram[i];
        }
    }
    printf("%d",min);
}
