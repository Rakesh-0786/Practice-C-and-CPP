#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int X)
    {
        a=X;
    cout<< "A class constructor intialized"<<endl;
    }
    void dispa(void)
    {
        cout<< "value of A"<<a;
    }
};
class B
{
    int b;
    public:
    B(int y)
    {
        b=y;
        cout<<" B class constructor initialized "<<endl;

    }
    void dispb(void){
        cout<<"value of B"<<b;
    }
};
 class C:public A,public B      // here we are decided which class and which parameters execute first
 {
    int m;
    public:
    C(int X,int y,int z):A(X),B(y){
        m=z;
         cout<<" C class constructor is initialized";
    }
    void dispm(void)
    {
        cout<<"value of m"<<m;

    }
 };
 int main()
 {
   C obj(10,20,30);
   obj.dispa();
   obj.dispb();
   obj.dispm();
   return 0;
 }
