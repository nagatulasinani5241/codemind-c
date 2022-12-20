#include<stdio.h>
int main(){
    int i,n,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            j=j+1;
        }
    }
    if(j==2)
    printf("Prime");
    else 
    printf("Not Prime");
}