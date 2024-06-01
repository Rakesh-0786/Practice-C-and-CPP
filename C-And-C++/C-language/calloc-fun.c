#include<stdio.h>
int main()
{
    int *p,n;
    printf("enter the number of blocks");
    scanf( "%d", &n);
    p=calloc(n,2);
    for( int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    p=calloc(n,2);
    for(int j=0;j<n;j++)
    {
        printf(" number are : %d",*(p+j));
    }
    getch();

}