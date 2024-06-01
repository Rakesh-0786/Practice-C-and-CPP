#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("positive number");
        
    }
    if(x<=0)
    {
        printf("non positive");
        
    }
    printf("%d",x);
    return 0;
}