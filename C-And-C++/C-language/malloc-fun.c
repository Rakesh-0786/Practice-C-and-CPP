#include<stdio.h>
int main()
{
    int n;
    int*p;
    printf("enter no of block size");
    scanf("%d",&n);
     p=malloc(n * sizeof (int));

    for(int i=0;i<n;i++)
   
    {
scanf("%d",(p+i));


    }
    for (int j=0;j<n;j++)
    {
        printf("number are: %d",*(p+j));

    }

}