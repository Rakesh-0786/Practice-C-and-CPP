#include<stdio.h>
int main()
{
    int x,y;
    x=8;
    y=9;
    printf("enter the number");
    scanf("%d%d",&x,&y);
    if(x>=y)
    {
        printf("%d is maximum",x);
        
    }
    else
    {
        printf(" %d is minimum",y);
        
    }
    printf("%d%d",x,y);
} 