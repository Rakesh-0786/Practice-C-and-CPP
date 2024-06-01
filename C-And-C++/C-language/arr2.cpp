#include<stdio.h>
int main()
{
    int i,a[]={1,2,3,4,5,6,7,9,0};
    
    int max=a[0];
    int Smax=a[0];
    for(int i=0;i<9;i++){
        if(a[i]>max){
            Smax=max;
            max=a[i];
        }
        else if(a[i]>Smax){
            Smax=a[i];
        }
    }
    printf("%d\n%d",Smax,max);

}