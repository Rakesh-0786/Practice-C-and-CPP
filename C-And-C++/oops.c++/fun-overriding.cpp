#include<iostream>
using namespace std;
class A{
    public:
    void fun()
    {
        cout<<"Nitish "<<endl;
    }
};
class B:public A{
    public:
    void fun()
    {
        cout<<"sajan"<<endl;


    }
};
int main()
{
  A*ptr;  B obj;
   ptr=&obj;
   ptr->fun();
   obj.fun();
    return 0;
}