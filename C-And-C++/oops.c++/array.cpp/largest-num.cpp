#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{  
    int a[]={2,5,8,13,57,95,6,9,98,76};
    int m=a[0];
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        m=max(m,a[i]);
    }
    cout<<m;
}