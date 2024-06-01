#include<stdio.h>
int main()

{
    int *p1,*p2;
    p1=(int*)calloc(5,sizeof (int));
    p2=(int*)realloc(p1,sizeof (int));
    if(p2==NULL)
    {
        free(p1);
        return 0;
    }
else
{
    free(p2);
}
return 0;
}