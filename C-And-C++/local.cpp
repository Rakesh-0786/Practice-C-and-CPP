#include<iostream>
using namespace std;
int g=0;   //global variable
void add()
{
   int a=10; // local variable
   g=g+a;
   cout<< g<<endl;
}
int main()
{
    g=15;  
    add();
    g++;
    cout<<g<<endl;
}
