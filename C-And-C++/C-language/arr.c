#include<stdio.h>
int main()
{
    int i,a[10]={1,2,3,4,555,6,7,8,9,0};
    
    
    for(int i=1;i<9;i++){
      if(a[i]>a[0]){
        a[0]=a[i];
      }
    
    }
    printf("%d",a[0]);
    return 0;
}