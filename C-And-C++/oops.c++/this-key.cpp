#include<iostream>
using namespace std;
class A
{
int a,b;
public:
A(int a,int b)
{


    this->a=a; this->b=b;
}
    void show()
    {
        cout<<a<<" "<<b<< endl;//( this <<""<< is  used  for space the output) 
    }
    };
    int main()
    {
        A obj(10,20);
        obj.show();
    return 0;
    } 

    

