#include<stdio.h>
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);

}

int main()
    {
        int i, a[100]={1,2,6,78};
        display(a,4);
        return 0;
    }

