#include<stdio.h>
int main()
{
    int i,a[10]={1,2,3,4,5,6,7,8,9,0};
    int max,max2;
    max=a[0];
    Smax=a[0];
    for(int i=0;i<10;i++){
        if(a[i]>max){
            Smax=max;
            max=a[i];
        }
        else if(a[i]>Smax){
            Smax=a[i];
        }
    }
    printf("%d")

}