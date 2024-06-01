#include<stdio.h>
int add()
{
    int x=80;
    
    printf("%d\n",x);

}
int main ()
{
    int a=20;
    add();
    printf("%d\n",a);
    return 0;
}
#include<stdio.h>
int x=1;
void demo()
{
    printf("%d\n",x);
    x=100;
}
void main ()
{
    printf("%d\n",x);
    demo();
}

