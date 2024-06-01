#include<stdio.h>
int main()
{
    int a,b,s,choice;
    
    printf("addition\n");
    printf("odd- even");
    printf("printing fist n  number");
    printf("Exit");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("enter the two number");
        scanf("%d",&a,&b);
        s=a+b;
        printf("%d",s);
        break;
        case 2:
        printf("enter the number");
        scanf("%d",&a);
        if(a%2==0)
        printf("even number");
        else
        printf("even number");
        break;
        case 3:
        printf("enter the number");
        scanf("%d",a);
        for(b=1;b<=a;b++)
        printf("%d",b);
        break;
        case 4:
        Exit(0);
        default:
        
        return 0;

    }
}

        
    

