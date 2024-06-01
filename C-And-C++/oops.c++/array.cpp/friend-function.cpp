#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void  setData(int x,int y)
    {
        a=x; b=y;
    }
   
    void showdata ()
    {
    cout<<"a: "<<a<<endl<<"b: "<<b<< endl;
    }
friend void fun(Complex c);
};
void fun(Complex c)
{
cout<< "sum is "<<c.a + c.b;
}

int main()
{
    Complex c1;
    c1.setData(5,7);
    c1.showdata();
    fun(c1);
return 0;
}





